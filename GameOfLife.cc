#include <iostream>
#include <cstdlib>
#include <vector>
#include "GameOfLife.h"

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
                  board.setBoard(r, c);
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

}




/*
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


         _board[r][c] = NONE;
         // counts the empty organisms
         if (_board[r-1][c-1] == NONE)
         {
           count = count + 1;
         }
         else if (_board[r][c-1] == NONE)
         {
           count = count + 1;
         }
         else if (_board[r+1][c-1] == NONE)
         {
           count = count + 1;
         }
         else if (_board[r-1][c] == NONE)
         {
           count = count + 1;
         }
         else if (_board[r+1][c] == NONE)
         {
           count = count + 1;
         }
         else if (_board[r-1][c+1] == NONE)
         {
           count = count + 1;
         }
         else if (_board[r][c+1] == NONE)
         {
           count = count + 1;
         }
         else if (_board[r+1][c+1] == NONE)
         {
           count = count + 1;
         }
      }
   }
}


*/

