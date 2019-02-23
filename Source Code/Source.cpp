#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <conio.h> //Library for _getch();
#include "Gallows.h" //Plots the gallows depending on the number of mistakes.
#include "File.h" //Sends back the required word from the word.txt file for the game.

using namespace std;
void CheckInput(string &, char &, vector <char> &, int, vector <char>); //Checks user input if its a letter and if its a duplicate letter.
bool CheckLetter(char &, string, vector <char> &, int &); //Checks if the letter is a part of the required word and it the player has won.
void PrintFields(vector <char>); //Prints a vector.
void PrintInfo(vector <char>, int, vector <char>); //Prints the required word, number of tries and already inputed letters.
bool Exit();

int main()
{
	srand(time(NULL));
	do
	{
		string word, input;
		char letter = ' ';
		int mistakes = 0;
		bool wordFound = false;
		word = RequiredWord(); //Word is the required word to find to win the game.
		vector <char> tempWord; //Vector that holds found and unfound (_) letters of the required word.
		vector <char> tempLetters; //Vector that holds all the user inputted letters.
		for (int i = 0; i < word.size(); i++)
		{
			tempWord.push_back('_');
		}
		system("cls");
		cout << "Welcome to the game of Gallows! The point of the game is to find the required word to win by inputting one letter at a time. Good luck!" << endl << "Press any key to continue." << endl;
		_getch();
		PrintInfo(tempWord, mistakes, tempLetters);
		while (1)
		{
			cout << "Input a letter: ";
			getline(cin, input);
			CheckInput(input, letter, tempLetters, mistakes, tempWord);
			wordFound = CheckLetter(letter, word, tempWord, mistakes);
			PrintInfo(tempWord, mistakes, tempLetters);
			Gallows(mistakes);
			if (wordFound)
			{
				cout << "Congratulations! You have won the game!" << endl;
				break;
			}
			if (mistakes == 8) //Number of tries before game over.
			{
				cout << "You have lost the game, better luck next time!" << endl;
				break;
			}
		}
	} while (Exit());
}

void CheckInput(string & input, char & letter, vector <char> & tempLetters, int mistakes, vector <char> tempWord)
{
	bool duplicate = false;
	while (input.size() > 1 || (!(input[0] >= 'a' && input[0] <= 'z') && !(input[0] >= 'A' && input[0] <= 'Z'))) //Input has to be a single letter from a-z.
	{
		PrintInfo(tempWord, mistakes, tempLetters);
		Gallows(mistakes);
		cout << "Wrong input, please input a single letter a-z: ";
		getline(cin, input);
	}
	if (input[0] >= 'A' && input[0] <= 'Z') //If its uppercase letter turn it into lowercase.
		letter = input[0] + 32;
	else
		letter = input[0];
	for (int i = 0; i < tempLetters.size(); i++) //Checks if the inputted letter was already inputted before.
	{
		if (letter == tempLetters[i])
		{
			duplicate = true;
		}
	}
	if (duplicate == true)
	{
		PrintInfo(tempWord, mistakes, tempLetters);
		Gallows(mistakes);
		cout << "You have already inputted this letter, please try another: ";
		getline(cin, input);
		CheckInput(input, letter, tempLetters, mistakes, tempWord);
	}
	else
		tempLetters.push_back(letter); //The input was not a duplicate so it goes into the vector that holds all the user inputted letters.
}

bool CheckLetter(char & letter, string word, vector <char> & tempWord, int & mistakes)
{
	bool letterFound = false;
	for (int i = 0; i < word.size(); i++) //Checks if the letter is in the required word.
	{
		if (letter == word[i])
		{
			tempWord[i] = letter;
			letterFound = true;
		}
	}
	if (letterFound == false) //Inputted letter is not found in the required word so the number of mistakes goes up.
	{
		mistakes++;
		return false;
	}
	else
	{
		for (int i = 0; i < tempWord.size(); i++) //If the tempWord doesn't have any _ that means all the letters have been found, player has won. 
		{
			if (tempWord[i] == '_')
			{
				return false;
			}
		}
		return true;
	}
}

void PrintFields(vector <char> vector)
{
	for (int i = 0; i < vector.size(); i++)
	{
		cout << vector[i] << " ";
	}
	cout << endl;
}

bool Exit()
{
	string input;
	cout << "Would you like to play again? Y/y for yes or any other key for no." << endl;
	getline(cin, input);
	if (input[0] == 'Y' || input[0] == 'y')
		return true;
	else
		return false;
}

void PrintInfo(vector <char> tempWord, int mistakes, vector <char> tempLetters)
{
	system("cls");
	cout << "Required word: ";
	PrintFields(tempWord);
	cout << "Your inputted letters: ";
	PrintFields(tempLetters);
	cout << "Number of tries left: " << 8 - mistakes << endl;
}
