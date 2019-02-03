// Author: Jenny Kim and FeiFei Hagan
// CPS222 Project 1
// Game of Life

// Create a "header guard"
#ifndef GAMEOFLIFE_H_
#define GAMEOFLIFE_H_

#include <iostream>
using std::istream;

enum Organism { NONE, LIVING };
Organism _board[totalRows][totalCols];

// Stores and manipulates the board and state of Life game
class GameOfLifeBoard{
public:
  GameOfLifeXO get(unsigned row, unsigned col);
  void set(unsigned row, unsigned col, GameOfLifeXO person);

  // Checks the condition of life and returns result
  GameOfLifeXO state();

private:
  GameOfLifeXO board_[18][50] = {};
  
};

// Encapsulates one move
class GameOfLifeMove {
public:
  // Constructor. (row, col) identifies place on board; (0, 0) is bottom left.
  GameOfLifeMove(GameOfLifeXO person, unsigned row, unsigned col)
   
  // Getters
  GameOfLifeXO person();
  unsigned row();
  unsigned col();

private:
  GameOfLifeXO person_;

  // location on board: (0, 0) is bottom left
  unsigned row_;
  unsigned col_;
  
};

// Stores and manages the game of life
class GameOfLifeGame {
public:

private:
  GameOfLifeBoard board_;
  GameOfLifeMove* moves_* [900] = {};

};

#endif // GAMEOFLIFE_H_


