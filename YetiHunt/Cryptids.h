#pragma once

#include "Board.h"
#ifndef CRYPTIDCLASS
#define CRYPTIDCLASS

using namespace std;

class CryptidClass
{
private:

public:
	CryptidClass();
	//Pre: CryptidClass must be defined as a class object.
	//Post: Usable definition for CryptidClass
	//Purpose: Stores x and y position of cryptid and allows access to class methods

	int CryptidNap(int cryptid);
	//Pre: Needs choice of cryptid passed into function
	//Post: Returns value based on whether or not Yeti or Sasquatch nap on a given turn.
	//Purpose: Determine whether or not a given cryptid naps

	int CryptidSound(int cryptidnap);
	//Pre: Needs value returned from cryptidnap passed in
	//Post: Returns value based on whether or not a cryptid made a sound when napping or moving
	//Purpose: Determine if any sound was made by cryptids


	int x;
	// Cryptid x Pos
	int y;
	// Cryptid y Pos
	void Move(int movement, int cryptidType, CryptidClass& cryptid, BoardClass& board);
	//Pre: Requires variable determining if nap prohibits movement, requires type of cryptid to be chosen, and requires populated cryptid class and board class 
	//Post: Alters the positions of the board with the updated spots from team A, B, C, and the cryptids.
	//Purpose: Determine where on the board either the teams or the cryptids will be moved to.
};
#endif
