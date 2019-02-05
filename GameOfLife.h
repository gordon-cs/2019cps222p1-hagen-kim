// Author: Jenny Kim and FeiFei Hagan
// CPS222 Project 1
// Game of Life

// Create a "header guard"
#ifndef GAMEOFLIFE_H_
#define GAMEOFLIFE_H_

#include <iostream>
using std::istream;
enum Organism { NONE, GESTATING, LIVING, DYING };


// definition of what each of the constants represent
static const int activeRows = 18;
static const int activeCols = 50;
static const int totalRows = activeRows + 2;
static const int totalCols = activeCols + 2;
static const char ESC = 27;

// how each of the constants is displayed on the board 
static const char LIVING = "*";
static const char NONE = " ";


// Stores and manipulates the board and state of Life game
class GameOfLifeBoard{
public:
  Organism get(unsigned row, unsigned col);
  void set(unsigned row, unsigned col, Organism person);

  // Checks the condition of life and returns result
  Organism state();


class board {
  public:
  board();
  board( const board& board);
  ~board();
  bool 

//Initializing the board
private:
  enum Organism _board[totalRows][totalCols];
  for (int i = 0; i < activeRows; i++){
        for (int j = 0; j < activeCols; j++) {
                _board[i][j] = 0;
  }
}


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


