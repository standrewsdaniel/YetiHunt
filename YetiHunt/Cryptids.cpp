#include "Cryptids.h"
#include "Board.h"
#include <iostream>
#include<string>
using namespace std;

int x;
int y;

CryptidClass::CryptidClass()
{
	x = 30;
	y = 15;
};

int CryptidClass::CryptidNap(int cryptid)
{
	//Sasquatch = 0
	//Yeti = 1
	//Wendigo Does Not Nap

	int temp;

	if (cryptid == 0)
	{
		temp = rand() % 3;
		if (temp == 1)
		{
			//Sasquatch Does Nap
			return 0;
		}
		else
		{
			//Sasquatch Moves
			return 1;
		}
	}
	else if (cryptid == 1)
	{
		temp = rand() % 2;
		if (temp == 0)
		{
			// Yeti Naps
			return 2;
		}
		else
		{
			//Yeti Moves
			return 3;
		}
	}
}

int CryptidClass::CryptidSound(int cryptidnap)
{
	// Returning 1 Means the Sasquatch Made a Sound napping.
	// Returning 0 Means the Sasquatch did not make a Sound napping.
	// Returning 2 Means the Sasquatch Made a sound moving.
	// Returning 0 Means the Sasquatch did not make a sound moving.
	// Returning 3 Means the Yeti Made a sound when napping.

	int temp;

	if (cryptidnap == 0)
	{
		// Sasquatch chance to make a sound when napping. 

		temp = rand() % 4;
		if (temp > 0)
		{
			// Sasquatch Nap Sound
			return 1;
		}
		else
		{
			// No Sasquatch Nap Sound
			return 0;
		}

	}
	else if (cryptidnap == 1)
	{
		// Sasquatch chance to make sound when moving
		temp = rand() % 20;

		if (temp < 3)
		{
			// Sasquatch Move Sound
			return 2;
		}
		else
		{
			// No Sasquatch Move Sound
			return 0;
		}

	}
	else if (cryptidnap == 2)
	{
		temp = rand() % 2;
		if (temp == 1)
		{
			// Yeti Nap Sound
			return 4;
		}
		else
		{
			// No Yeti Nap Sound
			return 0;
		}
	}
	else if (cryptidnap == 3)
	{
		temp = rand() % 5;
		if (temp < 0)
		{
			// Yeti Move Sound
			return 6;
		}
		else
		{
			// No Yeti Move Sound
			return 0;
		}
	}
	else
	{
		temp = rand() % 3;
		if (temp < 0)
		{
			// Wendigo Made Sound
			return 8;
		}
		else
		{
			// Wendigo Made No Sound
			return 0;
		}
	}
}

void CryptidClass::Move(int movement, int cryptidType, CryptidClass& cryptid, BoardClass& board1)
{
	// CryptidType 0 = Sasquatch
	// CryptidType 1 = Yeti
	// CryptidType 2 = Wendigo

	if (movement == 1)
	{
		if (cryptidType == 0)
		{
			board1.board[cryptid.y][cryptid.x] = 'X';
			cryptid.x = cryptid.x - 1;
			board1.board[cryptid.y][cryptid.x] = 'S';
		}
		else if (cryptidType == 1)
		{
			board1.board[cryptid.y][cryptid.x] = 'X';
			cryptid.x = cryptid.x - 1;
			board1.board[cryptid.y][cryptid.x] = 'Y';
		}
		else if (cryptidType == 2)
		{
			board1.board[cryptid.y][cryptid.x] = 'X';
			cryptid.x = cryptid.x - 1;
			board1.board[cryptid.y][cryptid.x] = 'W';
		}
	}
	else
	{
		if (cryptidType == 0)
		{
			board1.board[cryptid.y][cryptid.x] = 'S';
		}
		else if (cryptidType == 1)
		{
			board1.board[cryptid.y][cryptid.x] = 'Y';
		}
		else if (cryptidType == 2)
		{
			board1.board[cryptid.y][cryptid.x] = 'W';
		}
	}

}