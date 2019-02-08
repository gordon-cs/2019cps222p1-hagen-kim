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
             _board[r][c] = 0;
        }
    }
};

void displayBoard(vector< vector<char> > &_board)
{
    for (int i = 0; i < x; i++)
    {
        cin >> row;
        cin >> col;

        _board[row][col] = char;
     }
}


// counts the living organisms

GameOfLife :: state()
 {
    for (int r = 0; r < activeRows; r++ )
    {
       for (int c = 0; c < activeCols; c++)
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
       }
     }



// counts the empty organisms


  for (int r = 0; r < activeRows; r++ )
  {
    for (int c = 0; c < activeCols; c++)
    {
      int count = 0;
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
