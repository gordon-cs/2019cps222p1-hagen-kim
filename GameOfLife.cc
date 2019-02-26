// Author: Jenny Kim and FeiFei Hagan
// We got help from and worked with Januel and his team
//RT: good notte, thanks;  a little more details would be helpful.
//    Also, it's spelled Jahnuel.

#include <iostream>
#include <cstdlib>
#include <vector>
#include "GameOfLife.h"

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
            _board[r][c] = Board::NONE;
        }
    }
}

/* Sets the organism's value based on their location
 */
void Board::setBoard(int r, int c, Organism value)
{
    _board[r][c] = value;
}

/* Displays the board with each organism's state
 */
void Board::printBoard()
{
    // Nested for loop iterates through the whole board
    for (int r = 0; r < totalRows; r++)
    {
        for (int c = 0; c < totalCols; c++)
        {
            // Draws the first and last rows
            if (r == 0 || r == totalRows - 1) {
                // Draws top left and bottom left edge
                if (c == 0)
                {
                    cout << "+";
                }
                // Draws top right and bottom right edge
                else if (c == totalCols - 1)
                {
                    cout << "+" << endl;
                }
                // Draws dashes in between edge symbols
                else
                {
                    cout << "-";
                }
            }
            // Draw the organism and the left/right borders
            // Draws the left border
            else if (c == 0)
            {
                cout << "|";
            }
            // Draws the right border
            else if (c == totalCols -1)
            {
                cout << "|" << endl;
            }
            // Draws the organism's state
            else if ((c != 0) && (c != totalCols -1))
            {
                Organism state = _board[r][c];
                switch(state)
                {
                    case NONE: cout << " ";
                        break;
                    case DYING: cout << "*";
                        break;
                    case LIVING: cout << "*";
                        break;
                    case GESTATING: cout << " ";
                        break;
                }
            }
        }
    }
}


/* Counts the amount of living neighbors around an organism
 * Return: The amount of living neighbors around an organism
 */
int Board::livingNeighbors(int r, int c)
{
    int count = 0;
    // Checks upper left organism to see if it's living
    if ((_board[r-1][c-1] == LIVING) || (_board[r-1][c-1] == DYING))
    {
        count = count + 1;
    }
    // Checks the left organism to see if it's living
    if ((_board[r][c-1] == LIVING) || (_board[r][c-1] == DYING))
    {
        count = count + 1;
    }
    // Checks the bottom left organism to see if it's living
    if ((_board[r+1][c-1] == LIVING) || (_board[r+1][c-1] == DYING))
    {
        count = count + 1;
    }
    // Checks the upper middle organism to see if it's living
    if ((_board[r-1][c] == LIVING) || (_board[r-1][c] == DYING))
    {
        count = count + 1;
    }
    // Checks the bottom middle organism to see if it's living
    if ((_board[r+1][c] == LIVING) || (_board[r+1][c] == DYING))
    {
        count = count + 1;
    }
    // Checks the upper right organism to see if it's living
    if ((_board[r-1][c+1] == LIVING) || (_board[r-1][c+1] == DYING))
    {
        count = count + 1;
    }
    // Checks the right organism to see if it's living
    if ((_board[r][c+1] == LIVING) || (_board[r][c+1] == DYING))
    {
        count = count + 1;
    }
    // Checks the bottom right organism to see if it's living
    if ((_board[r+1][c+1] == LIVING) || (_board[r+1][c+1] == DYING))
    {
        count = count + 1;
    }
    return count;
}

/* Changes the state of each organism based on the rules of the Game of Life
 */
void Board::updateBoard() {
    // Generates the living organisms on the board
    for (int r = 1; r <= activeRows; r++)
    {
        //RT: both loops stopped 1 short of the end,
        //    so bottom row and right column never got updated.
        for (int c = 1; c <= activeCols; c++)
        {

            /* During each cycle of play, an organism is born into an empty location which has exactly
             three neighboring locations containing organism */
            if (_board[r][c] == NONE && livingNeighbors(r, c) == 3)
            {
                _board[r][c] = GESTATING;
            }
            // All organisms with fewer than two neighboring organisms die of loneliness
            else if (_board[r][c] == LIVING && livingNeighbors(r, c) < 2)
            {
                _board[r][c] = DYING;
            }
            // All organisms with more than three neighboring organisms die of overcrowding
            else if (_board[r][c] == LIVING && livingNeighbors(r, c) > 3)
            {
                _board[r][c] = DYING;
            }
        }
    }
    // Generates the next generation
    for (int r = 0; r < totalRows; r++)
    {
        for (int c = 0; c < totalCols; c++)
        {
            // Changes the new organisms to LIVING
            if (_board[r][c] == GESTATING)
            {
                _board[r][c] = LIVING;
            }
            // Changes the dying organisms to NONE
            else if (_board[r][c] == DYING)
            {
                _board[r][c] = NONE;
            }
        }
    }
    // Prints the board after all changes have been made
    printBoard();
}
