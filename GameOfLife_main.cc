// Main Game of life program
// Author: FeiFei Hagen and Jenny Kim
// CPS222 Project 1

#include <iostream>
#include "GameOfLife.h"


using std::cout;
using std::endl;

using namespace std;



int main()
{

     Board board;

     board.printBoard();

     board.generations(); 

     board.updateBoard();

}


