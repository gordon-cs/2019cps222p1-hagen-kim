#include <iostream>
#include <cstdlib>
#include <vector>
#include "gameOfLife.h"

//#define NONE ' '
//#define LIVING '*'
using std::cout;
using std::endl;

using namespace std;

// definition of what each of the constants represent
static const int activeRows = 18;
static const int activeCols = 50;
static const int totalRows = activeRows + 2;
static const int totalCols = activeCols + 2;
static const char ESC = 27;



int main()
{
int x;
int row;
int col;
int gen;


/*for (int i = 0; i < activeRows; i++)
{
  for (int j = 0; j < activeCols; j++)
  {
    board[i][j] = ' ';
  }
*/


/*void displayboard();
}

void displayboard()
{
  for(int r = 0; r < activeRows; r++)
  {
    for(int c = 0; c < activeCols; c++)
    {
      board[r][c]==0;
    }
  }
  cout << endl;
  return;
}*/


enum Organism {NONE, LIVING};
Organism _board[totalRows][totalCols];

cout << "How many organisms initially? ";
cin >> x;

while (cin.get() != '\n') {   // intentionally empty loop body
}

cout << "Locations? ";
cin >> x;

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
  cout << " +--------------------------------------------------+" << endl;

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

GameOfLife :: action() {
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
