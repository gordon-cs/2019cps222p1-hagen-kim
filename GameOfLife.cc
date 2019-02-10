#include <iostream>
#include <cstdlib>
#include <vector>
#include "GameOfLife.h"
#include "GameOfLife_main.cc"

using std::cin;
using std::cout;
using std::endl;

using namespace std;


// Initialize the board
Board::Board()
{
    for (int r = 0; r < totalRows; r++)
    {
        for (int c = 0; c < totalCols; c++)
        {
            _board[r][c] = NONE;
        }
    }
}




void Board::printBoard()
{
    int numberOfOrganisms;
    cout << "How many organisms initially? ";
    cin >> numberOfOrganisms;

     while (cin.get() != '\n')
     {   // intentionally empty loop body
     }

     cout << "Locations? ";

         for(int r = 0; r < activeRows; r++)
         {
             for(int c = 0; c < activeCols; c++)
             {
                  cin >> r >> c;
                  _board.setBoard(r, c);
             }
         }
      while (cin.get() != '\n')
      {   // intentionally empty loop body
      }

      int gen;
      cout << "Generations? ";
      cin >> gen;

      while (cin.get() != '\n')
      {   // intentionally empty loop body
      }

      cout << ESC << "[H" << "Generation " << gen << ":" << endl;
      cout << ESC << "[H" << ESC << "[J" << "Initial:" << endl;

      cout << "+--------------------------------------------------+" << endl;

      for (int r = 0; r < activeRows; r++)
      {
        cout << "|";
          for (int c = 0; c < activeCols; c++)
          {
            cout << " ";
          }
        cout << "|";
        cout << endl;
       }

      cout << "+--------------------------------------------------+" << endl;

      cout << ESC << "[23;1H" << ESC << "[K" << "Press RETURN to continue";

      while (cin.get() != '\n')
      {   // intentionally empty loop body
      }
}




void Board::generations()
{
     for (int r = 0; r < activeRows; r++)
     {
        for (int c = 0; c < activeCols; c++)
        {
             _board[r][c] = LIVING;
        }
     }

}





void stateBoard()
{
    for (int r = 0; r < totalRows; r++)
    {
       for (int c = 0; c < totalCols; c++)
       {
         int count = 0;

         if (_board[r-1][c-1] == LIVING)
         {
            count = count + 1;
         }
         else if (_board[r][c-1] == LIVING)
         {
            count = count + 1;
         }
         else if (_board[r+1][c-1] == LIVING)
         {
            count = count + 1;
         }
         else if (_board[r-1][c] == LIVING)
         {
            count = count + 1;
         }
         else if (_board[r+1][c] == LIVING)
         {
            count = count + 1;
         }
         else if (_board[r-1][c+1] == LIVING)
         {
            count = count + 1;
         }
         else if (_board[r][c+1] == LIVING)
         {
            count = count + 1;
         }
         else if (_board[r+1][c+1] == LIVING)
         {
            count = count + 1;
         }


         //creates a new baord that is set to NONE
         new_board[r][c] = NONE;

         /*during each cycle of play, an organism is born into an empty location which has exactly
         three neighboring locations containinf organism*/
         if (_board[r][c] == NONE && count == 3)
         {
           new_board[r][c] = LIVING;
         }
         //all organisms with fewer than two neighboring organisms die of loneliness
         else if (_board[r][c] == LIVING && count < 2)
         {
           new_board[r][c] = NONE;
         }
         //all organisms with more than three neighboring organisms die of overcrowding
         else if (_board[r][c] == LIVING && count > 3)
         {
           new_board[r][c] = NONE;
         }
         //all other organisms (those with 2 or 3 neighboring organisms) survive into the next generation
         else if (_board[r][c] == LIVING && (count == 2 || count == 3))
         {
           new_board[r][c] = LIVING;
         }
      }
}


void updateBoard()
{
   for (int r = 0; r < totalRows; r++)
   {
       for (int c = 0; c < totalCols; c++)
       {
            _board[r][c] = updatedBoard[r][c];
       }
    }
}
