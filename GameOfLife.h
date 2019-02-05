// Author: Jenny Kim and FeiFei Hagan
// CPS222 Project 1
// Game of Life

// Create a "header guard"
#ifndef GAMEOFLIFE_H_
#define GAMEOFLIFE_H_

#include <iostream>
using std::istream;

enum Organism { NONE, LIVING };
Organism _board[18][50];


// Stores and manipulates the board and state of Life game
class GameOfLifeBoard{
public:
  Organism get(unsigned row, unsigned col);
  void set(unsigned row, unsigned col, Organism person);

  // Checks the condition of life and returns result
  Organism state();

private:
  Organism _board[18][50] = {
		{ Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none},
		{ Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none},
		{ Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none},
		{ Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none, Organism::none}  
	};
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

// Stores and manages the game of life
class GameOfLifeGame {
public:

private:
  GameOfLifeBoard _board;
  GameOfLifeMove* moves_* [900] = {};

};

#endif // GAMEOFLIFE_H_


