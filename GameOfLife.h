// Author: Jenny Kim and FeiFei Hagan
// CPS222 Project 1
// Game of Life

// Create a "header guard"
#ifndef GAMEOFLIFE_H_
#define GAMEOFLIFE_H_

#include <iostream>
using std::istream;
enum Organism { NONE, LIVING };


class OrganismBoard
{
     public:

        // definition of what each of the constants represent
        static const int activeRows = 18;
        static const int activeCols = 50;
        static const int totalRows = activeRows + 2;
        static const int totalCols = activeCols + 2;

        // Constructor  (same name as class, no return type, no need to specify constructor)
        OrganismBoard(int activeRows, int activeCols);

        // Prints the Game Of Life board
        void printBoard();

        // Updates the Game Of Life board
        void updateBoard();

        //Initializing the board


     private:
        Organism _board[totalRows][totalCols];
};


#endif // GAMEOFLIFE_H_


