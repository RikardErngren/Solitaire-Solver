#ifndef SOLITAIRE_SOLVER
#define SOLITAIRE_SOLVER


#include <vector>
#include <iostream>


class Board {
private:
    const int rows = 7;
    const int cols = 7;
    std::vector<bool> board_state;

public:
    Board(std::vector<bool> board_state);

    void print();

    std::vector<bool> get_board_state();
};

#endif