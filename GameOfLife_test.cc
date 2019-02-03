
// Tests for GameOfLife_test.cc
//
// Author (starting point): Russ Tuck
// Authors (everything else): Jenny Kim

#include <iostream>
using std::cout;
using std::endl;

#include "GameOfLife.h"

bool tttb_state_vertical_test() {
    GameOfLifeBoard b;
    b.set(0, 0, GameOfLifeXO::X);
    b.set(1, 0, GameOfLifeXO::X);
    if (GameOfLifeXO::X == b.state()) {
        cout << "tttb_person_vertical_test() failed for 2 in a row" << endl;
        return false;
    }
    b.set(2, 0, GameOfLifeXO::X);
    if (GameOfLifeXO::X != b.state()) {
        cout << "tttb_person_vertical_test() failed for 3 in a row" << endl;
        return false;
    }
    return true;
}

bool tttb_state_horizontal_test(){
    GameOfLifeBoard b;
    b.set(0, 0, GameOfLifeXO::O);
    b.set(0, 1, GameOfLifeXO::O);
    if (GameOfLifeXO::O == b.state()) {
	cout << "tttb_person_horizontal_test() failed for 2 in a row" << endl;
	return false;
    }
    b.set(0, 2, GameOfLifeXO::O);
    if (GameOfLifeXO::O != b.state()) {
	cout << "tttb_state_horizontal_test() failed for 3 in a row" << endl;
	return false;
    }
    return true;
}

bool tttb_state_diagonal_test() {
    GameOfLifeBoard b;
    b.set(0, 0, GameOfLifeXO::X);
    b.set(1, 1, GameOfLifeXO::X);
    if (GameOfLifeXO::X == b.state()) {
        cout << "tttb_state_diagonal_test() failed for 2 in a row" << endl;
        return false;
    }
    b.set(2, 2, GameOfLifeXO::X);
    if (GameOfLifeXO::X != b.state()) {
        cout << "tttb_state_diagonal_test() failed for 3 in a row" <<endl;
        return false;
    }
    return true;
}

// Runs tests above, and prints a message if they all pass.
// If any fail, they print their own failure messages.
int main() {
    bool result = true;
    result &= tttb_state_vertical_test();
    result &= tttb_state_diagonal_test();
    result &= tttb_state_horizontal_test();

    if (result) {
        cout << "All tests passed." << endl;
        return(0);
    }
    return(-1);

}
