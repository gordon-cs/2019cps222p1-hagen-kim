// Main Game of life program
// Author: FeiFei Hagen and Jenny Kim
// CPS222 Project 1

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "GameOfLife.h"


int main()
 {
     int numberOfOrganisms;
     int row;
     int col;
     int gen;
  
     //printBoard();
     //updateBoard();

     cout << "How many organisms initially? ";
     cin >> numberOfOrganisms;

     while (cin.get() != '\n') 
     {   // intentionally empty loop body
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

      while (cin.get() != '\n')
      {   // intentionally empty loop body
      }

      cout << "Generations? ";
      cin >> gen;

      while (cin.get() != '\n')
      {   // intentionally empty loop body
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

      while (cin.get() != '\n')
      {   // intentionally empty loop body
      }
  }
