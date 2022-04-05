#include "Board.h"
#include "Teams.h"
#include "Cryptids.h"
#include <iostream>
#include <string>

using namespace std;

BoardClass::BoardClass()
{
	board;
}

void BoardClass::Populate(int cryptid)
{
	// Fill Board with Empty Spaces
	for (int i = 0; i < BOARD; i++)
	{
		for (int j = 0; j < BOARD; j++)
		{
			board[i][j] = 'X';
		}
	}

	// Set which type of Cryptid is starting
	if (cryptid == 0)
	{
		board[15][30] = 'S';
	}
	else if(cryptid == 1)
	{
		board[15][30] = 'Y';
	}
	else
	{
		board[15][30] = 'W';
	}

}


void BoardClass::Print()
{
	for (int i = 0; i < BOARD; i++)
	{
		for (int j = 0; j < BOARD; j++)
		{
			cout << board[i][j] << ' ';
		}
		cout << "\n";
	}
}