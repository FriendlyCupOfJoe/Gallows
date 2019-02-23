#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <time.h>

using namespace std;

string RequiredWord() //Return the required word from word.txt file.
{
	string word;
	int maxWords = 0, wordPos;
	ifstream file("words.txt");
	if (file.is_open())
	{
		while (file.good())
		{
			while (getline(file, word))
			{
				maxWords++; //Total number of words in word.txt file.
			}
		}
		file.close();
	}
	else
	{
		cout << "Unable to open \"words.txt\" file" << endl;
	}

	wordPos = rand() % maxWords + 1; //Takes a random word position in the word.txt file from 1 to maxWords.

	file.open("words.txt");
	if (file.is_open())
	{
		int i = 0;
		while (file.good())
		{
			while (i < wordPos)
			{
				getline(file, word); //Takes the word from the random position and sends it back for the game.
				i++;
			}
			break;
		}
		file.close();
	}
	else
	{
		cout << "Unable to open \"words.txt\" file" << endl;
	}
	return word;
}
