// Main Game of life program
// Author: FeiFei Hagen and Jenny Kim
// CPS222 Project 1

#include <iostream>
#include "GameOfLife.cc"


using std::cout;
using std::endl;

using namespace std;

//RT: nice clean main() function, which indicates good class design

int main()
{
    // The professor's code
    static const char ESC = 27;
    // Creates an object of class Board
    Board board;
    // Variables used for user input
    int r, c, numberOfOrganisms, gen;
    // Asks user to input number of organisms
    cout << "How many organisms initially? ";
    cin >> numberOfOrganisms;
    // Asks user for each organism location
    cout << "Locations? ";
    for(int x = 0; x < numberOfOrganisms; x++)
    {
        cin >> r >> c;
        board.setBoard(r, c, Board::LIVING);
    }
    // Asks user for amount of generations
    cout << "Generations? ";
    cin >> gen;
    // The professor's code
    while (cin.get() != '\n') { }
    // Displays the board for each generation
    for (int x = 0; x < gen + 1; x++)
    {
        // Prints the initial board
        if (x == 0)
        {
            cout << ESC << "[H" << ESC << "[J" << "Initial:" << endl;
            board.printBoard();
            cout << ESC << "[23;1H" << ESC << "[K" << "Press RETURN to continue";
            while (cin.get() != '\n') { } // intentionally empty loop body
        }
        // Prints every generation
        else
        {
            cout << ESC << "[H" << "Generation " << x << ":" << endl;
            board.updateBoard();
            cout << ESC << "[23;1H" << ESC << "[K" << "Press RETURN to continue";
            while (cin.get() != '\n') { } // intentionally empty loop body
        }
    }
}
