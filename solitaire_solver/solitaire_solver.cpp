#include "solitaire_solver.h"


using std::vector;


const int BOARD_SIZE = 33;
const int WIDTH = 9;
vector<bool> VALID_POSITIONS =  {
    0,0,0,0,0,0,0,0,0,
    0,0,0,1,1,1,0,0,0,
    0,0,0,1,1,1,0,0,0,
    0,1,1,1,1,1,1,1,0,
    0,1,1,1,1,1,1,1,0,
    0,1,1,1,1,1,1,1,0,
    0,0,0,1,1,1,0,0,0,
    0,0,0,1,1,1,0,0,0,
    0,0,0,0,0,0,0,0,0
}


Board::Board(vector<bool> board_state) : board_state(board_state) {}

void Board::print() {
    for (int i=0; i<BOARD_SIZE; ++i) {
        if (i==0 || i==3 || i==27 || i==30) {
            std::cout << "    ";
        }
        std::cout << board_state[i] << " ";
        if (i==2 || i==5 || i==12 || i==19 || i==26 || i==29) {
            std::cout << std::endl;
        }       
    }
}

vector<bool> Board::get_board_state() {
    return board_state;
}

std::vector<int> Board::find_neighbours(int index) {
    vector<int> neighbours;

    if (VALID_POSITIONS[index-WIDTH]) {
        neighbours.push_back(index-WIDTH);
    }
    
    if (VALID_POSITIONS[index+WIDTH]) {
        neighbours.push_back(index+WIDTH);
    }

    if (VALID_POSITIONS[index-1]) {
        neighbours.push_back(index-1);
    }

    if (VALID_POSITIONS[index+1]) {
        neighbours.push_back(index+1);
    }

    return neighbours; //ends up being in the order [top, bottom, left, right]
}

const int Move::get_to() {
    return to;
}

const int Move::get_to() {
    return over;
}

const int Move::get_from() {
    return from;
}

std::vector<Move> FindAllMoves::get_all_moves(Board board) {
    for (int i=0; i<BOARD_SIZE; i++) {
        if board.board_state[i] == true;
            board.find_neighbours();
    }
}