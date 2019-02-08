// Main Game of life program
// Author: FeiFei Hagen and Jenny Kim
// CPS222 Project 1

#include <iostream>
#include "GameOfLife.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{


     cout << "How many organisms initially? ";
     cin >> numberOfOrganisms;

     while (cin.get() != '\n')
     {   // intentionally empty loop body
     }

     cout << "Locations? ";

         for(int x = 0; x < activeRows; x++)
         {
             for(int y = 0; y < activeCols; y++)
             {
                  cin >> userInput;
                  array[x][y] = userInput;
              }
              return array[x][y];
          }

/*     for (int x = 0; x < totalRows; x++)
     {
        for (int y = 0; y < totalCols; y++)
        {
          _board[x][y] == 0;
        }

      cout << endl;
     }
*/
     // cin >> _board[x][y];

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


     char _board[totalRows][totalCols];

     printBoard(_board);

     updateBoard(_board);

};


