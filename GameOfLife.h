// Author: Jenny Kim and FeiFei Hagan
// CPS222 Project 1
// Game of Life

// Create a "header guard"
#ifndef GAMEOFLIFE_H_
#define GAMEOFLIFE_H_

#include <iostream>
using std::istream;
enum Organism { NONE, GESTATING, LIVING, DYING };


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

public:
	Board();

public:
	printBoard();

public:
	updateBoard();
};


// Stores and manipulates the board and state of Life game
class GameOfLifeBoard{
public:
  Organism get(unsigned row, unsigned col);
  void set(unsigned row, unsigned col, Organism person);

  // Checks the condition of life and returns result
  Organism state();

};


// Encapsulates one move
class GameOfLifeMove {
public:
  // Constructor. (row, col) identifies place on board; (0, 0) is bottom left.
  GameOfLifeMove(Organism person, unsigned row, unsigned col);
   
  // Constructor reads coordinates from input stream in format
  // row  col
  GameOfLifeMove(Organism person, istream input);
 
  // Getters
  Organism person();
  unsigned row();
  unsigned col();

  private:
    Organism person_;

  // location on board: (0, 0) is bottom left
  unsigned row_;
  unsigned col_;
  
};


#endif // GAMEOFLIFE_H_


