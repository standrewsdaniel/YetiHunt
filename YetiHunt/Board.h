#pragma once
#ifndef BOARDCLASS
#define BOARDCLASS

const int BOARD = 31;

class BoardClass
{
private:

public:
	BoardClass();
	//Pre: BoardClass as a class must be defined.
	//Purpose: Provide usable definition for BoardClass. 
	//Post: Includes access to game board for use from BoardClass.

	char board[BOARD][BOARD];
	// Defines size of game board for use by BoardClass.

	void Populate(int cryptid);
	//Pre: The choice of which cryptid the user is using must be made to be passed into the function.
	//Purpose: Populate the game board with Xs.
	//Post: Prints an X to every spot in the 2d array.

	void Print();
	//Pre: Requires board to have been populated.
	//Purpose: Prints the board to the screen at the end of the game.
	//Post: Returns entire game board to screen.
};

#endif // !BOARDCLASS
