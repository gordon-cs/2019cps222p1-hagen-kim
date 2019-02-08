// Author: Jenny Kim and FeiFei Hagan
// CPS222 Project 1
// Game of Life

// Create a "header guard"
#ifndef GAMEOFLIFE_H_
#define GAMEOFLIFE_H_
#include <vector>
#include <iostream>
using std::istream;

enum Organism { NONE, LIVING };
Organism _board[totalRows][totalCols];

// stores and manipulates the board and state of life game
class Board {

private:
	// definition of what each of the constants represent
	static const int activeRows = 18;
	static const int activeCols = 50;
	static const int totalRows = activeRows + 2;
	static const int totalCols = activeCols + 2;
	static const char ESC = 27;

	// how each of the constants is displayed on the board 
	static const char LIVING = "*";
	static const char NONE = " ";
  
// Constructor  (same name as class, no return type, no need to specify constructor
public:
	Board();

// Initializing the board
public:
	void printBoard();

 // Updates the Game Of Life board
 public:
  void updateBoard();

 private:
    Organism _board[totalRows][totalCols];
};


#endif // GAMEOFLIFE_H_


