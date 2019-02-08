// Author: Jenny Kim and FeiFei Hagan
// CPS222 Project 1
// Game of Life

// Create a "header guard"
#ifndef GAMEOFLIFE_H_
#define GAMEOFLIFE_H_

#include <iostream>
using std::istream;

// represent the status on the board
enum Organism { NONE, LIVING };

class Board {
public:
	// constructor
	Board();

public:
	// print the board
	void printBoard();

public:
	// mutator
	void updateBoard();

private:
        static const int activeRows = 18;
        static const int activeCols = 50;
        static const int totalRows = activeRows + 2;
        static const int totalCols = activeCols + 2;

        // used to clear the screen before the initial board is displayed at toplevel near the start of the file
        static const char ESC = 27;
};


#endif // GAMEOFLIFE_H_
