#include <iostream>
#include <cstdlib>
#include <vector>
#include "GameOfLife.h"

using std::cout;
using std::endl;

using namespace std;


// Initialize the board
/*Board::Board(const int tRows, const int tCols):
{
     totalRows(tRows),
     totalCols(tCols)
}
*/

void Board(Organism _board[totalRows][totalCols])
{
    for (int r = 0; r < totalRows-2; r++)
    {
        for (int c = 0; c < totalCols-2; c++)
        {
             cout << _board[r][c];
        }
     }  cout << endl;




/*void displayBoard()
{
    for (int i = 0; i < totalRows; totalRows++)
    {
        for (int j = 0; j < totalCols; totalCols++)
        {
             _board[i][j] = 0;
        }
    }
};*/


// counts the living organisms
void Board(Organism _board[totalRows][totalCols])
 {
    for (int r = 0; r < totalRows-1; r++ )
    {
       for (int c = 0; c < totalCols-1; c++)
       {
           cout << _board[r][c];
       }
       cout << endl;
   }
}



void  printBoard(Organism _board[totalRows][totalCols])
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


         updateBoard[r][c] = NONE;
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




void switch Board(Organism _board[totalRows][totalCols])
{
     for(int r = 0; r < totalRows; r++)
     {
        for(int c = 0; c < totalCols; c++)
        {

     }
}
