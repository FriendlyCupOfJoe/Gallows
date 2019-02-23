#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Gallows(int mistakes) //Plots the gallows depending on the number of mistakes.
{
	switch (mistakes)
	{
	case(0) :
	{
		break;
	}
	case(1) :
	{
		cout << endl << endl << endl << endl << endl << endl << endl;
		cout << "   " << "____";
		cout << endl << endl;
		break;
	}
	case(2) :
	{
		cout << "     " << "___" << endl;
		cout << "    " << "|" << "   " << "|" << endl;
		cout << "    " << "|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "  " << "__|__" << endl;
		cout << endl << endl;
		break;
	}
	case(3) :
	{
		cout << "     " << "___" << endl;
		cout << "    " << "|" << "   " << "|" << endl;
		cout << "    " << "|" << "   " << "O" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "  " << "__|__" << endl;
		cout << endl << endl;
		break;
	}
	case(4) :
	{
		cout << "     " << "___" << endl;
		cout << "    " << "|" << "   " << "|" << endl;
		cout << "    " << "|" << "   " << "O" << endl
			<< "    " << "|" << "   " << "|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "  " << "__|__" << endl;
		cout << endl << endl;
		break;
	}
	case(5) :
	{
		cout << "     " << "___" << endl;
		cout << "    " << "|" << "   " << "|" << endl;
		cout << "    " << "|" << "   " << "O" << endl
			<< "    " << "|" << "  " << "/|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "  " << "__|__" << endl;
		cout << endl << endl;
		break;
	}
	case(6) :
	{
		cout << "     " << "___" << endl;
		cout << "    " << "|" << "   " << "|" << endl;
		cout << "    " << "|" << "   " << "O" << endl
			<< "    " << "|" << "  " << "/|\\" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "  " << "__|__" << endl;
		cout << endl << endl;
		break;
	}
	case(7) :
	{
		cout << "     " << "___" << endl;
		cout << "    " << "|" << "   " << "|" << endl;
		cout << "    " << "|" << "   " << "O" << endl
			<< "    " << "|" << "  " << "/|\\" << endl
			<< "    " << "|" << "  " << "/" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "  " << "__|__" << endl;
		cout << endl << endl;
		break;
	}
	case(8) :
	{
		cout << "     " << "___" << endl;
		cout << "    " << "|" << "   " << "|" << endl;
		cout << "    " << "|" << "   " << "O" << endl
			<< "    " << "|" << "  " << "/|\\" << endl
			<< "    " << "|" << "  " << "/ \\" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "    " << "|" << endl
			<< "  " << "__|__" << endl;
		cout << endl << endl;
		break;
	}
	default:
		break;
	}
}
