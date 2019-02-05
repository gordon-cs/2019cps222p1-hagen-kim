#include <iostream>
#include <cstdlib>
#include <vector>
#include "GameOfLife.h"


using std::cout;
using std::endl;

using std::array;
  

Board board::get(unsigned row, unsigned col) {
    return _board[row][col];
}

void displayboard()
{
  for(int r = 0; r < activeRows; r++)
  {
    for(int c = 0; c < activeCols; c++)
    {
      


cout << "How many organisms initially? ";
cin >> numberOfOrganisms;

while (cin.get() != '\n') {   // intentionally empty loop body
}

cout << "Locations? ";
for (int x = 0; x < totalRows; x++)
{
 for (int y = 0; y < totalCols; y++)
 {
   _board[x][y] == 0;
 }
cout << endl;
return;
}
cin >> _board[x][y];


while (cin.get() != '\n') {   // intentionally empty loop body
}

cout << "Generations? ";
cin >> gen;

while (cin.get() != '\n') {   // intentionally empty loop body
}
cout << ESC << "[H" << "Generation " << gen << ":" << endl;
cout << ESC << "[H" << ESC << "[J" << "Initial:" << endl;

cout << "+--------------------------------------------------+" << endl;
  for (int i = 0; i < activeRows; i++)
  {
    cout << "|";
    for (int j = 0; j < activeCols; j++)
    {
      cout << " ";
    }
    cout << "|";
    cout << endl;
  }
  cout << "+--------------------------------------------------+" << endl;

  cout << ESC << "[23;1H" << ESC << "[K" << "Press RETURN to continue";
  while (cin.get() != '\n'){

  }
}

/*for (int i = 0; i < x; i++) {
  cin >> row;
  cin >> col;

  _board[row][col] = LIVING;
}
*/


// counts the living organisms

GameOfLife :: state() {
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
