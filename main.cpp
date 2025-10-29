#include "solitaire_solver.h"
#include <iostream>


int main() {
    std::vector<Board> solution;

    // default setup for a starting board, easier way of actually visualizing the board than
    // vector<bool> board_state(33, true);
    // board_state[16] = false;
    std::vector<bool> board_state = {true, true, true,
                                     true, true, true, 
                         true, true, true, true, true, true, true, 
                         true, true, true, false,true, true, true, 
                         true, true, true, true, true, true, true,
                                     true, true, true,
                                     true, true, true};

    Board board(board_state);
    board.print();
}