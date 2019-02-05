// Main Game of life program
// Author: FeiFei Hagen and Jenny Kim
// CPS222 Project 1

#include <iostream>
using std::cout;
using std::endl;

#include "GameOfLife.h"
#include "GameOfLife.cc"

int main() {
	int numberOfOrganisms;
	int row;
	int col;
	int gen;
	
	printBoard();
	updateBoard();
}
