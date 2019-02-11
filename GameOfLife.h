// Author: Jenny Kim and FeiFei Hagan
// CPS222 Project 1
// Game of Life

// Create a "header guard"
#ifndef GAMEOFLIFE_H_
#define GAMEOFLIFE_H_
#include <vector>
#include <iostream>
using std::istream;


class Board
{
public:
    enum Organism { NONE, LIVING, DYING, GESTATING };
    // This constructor initializes the Board to NONE
    Board();
    
    // Organism is set to a specific place on the board
    void setBoard(int r, int c, Organism value);
    
    // the state that the board is in
    int livingNeighbors(int r, int c);
    
    // Prints the Game Of Life board
    void printBoard();
    
    // Updates the Game Of Life board
    void updateBoard();
    
    //Initializing the board
    static const int activeRows = 18;
    static const int activeCols = 50;
    
private:
    static const int totalRows = activeRows + 2;
    static const int totalCols = activeCols + 2;
    Organism _board[totalRows][totalCols];
};




#endif // GAMEOFLIFE_H_
