#include "solitaire_solver.h"
#include <iostream>



int main() {
    std::vector<Board> solution;

    // default setup for a starting board, easier way of actually visualizing the board than
    // vector<bool> board_state(33, false);
    // board_state[16] = false;
    std::vector<bool> board_state =  {false, false, false,
                                      false, false, false, 
                        false, false, false, false, false, false, false, 
                        false, false, false, true,  false, false, false, 
                        false, false, false, false, false, false, false,
                                      false, false, false,
                                      false, false, false};

    Board board(board_state);
    board.print();
}