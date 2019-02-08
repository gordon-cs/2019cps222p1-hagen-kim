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


class Board
{
    public:
        // This constructor initializes the Board to zero
        Board();

        // definition of what each of the constants represent
        static const int activeRows = 18;
        static const int activeCols = 50;
        static const int totalRows = activeRows + 2;
        static const int totalCols = activeCols + 2;
        int numberOfOrganisms;
        int row;
        int col;
        int gen;
        int x;
        int y;
        int userInput;
        static const char ESC = 27;

        // Prints the Game Of Life board
        void printBoard();

        // Updates the Game Of Life board
        void updateBoard();

     //Initializing the board
     private:
        Organism _board[totalRows][totalCols];

}; 


#endif // GAMEOFLIFE_H_


