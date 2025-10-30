#ifndef SOLITAIRE_SOLVER
#define SOLITAIRE_SOLVER


#include <vector>
#include <iostream>


class Board {
private:
    std::vector<bool> board_state;

public:
    Board(std::vector<bool> board_state);

    void print();

    std::vector<bool> get_board_state();

    std::vector<int> find_neighbours(int index);
};

struct Move {
private:
    const int to;
    const int over;
    const int from;

public:
    const int get_to();

    const int get_over();

    const int get_from();
};

struct FindAllMoves {
private:
    std::vector<Move> all_moves;

public:
    std::vector<Move> get_all_moves(Board board);
};


#endif