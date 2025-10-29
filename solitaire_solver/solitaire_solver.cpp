#include "solitaire_solver.h"


using std::vector;


const int rows = 7;
const int cols = 7;
vector<bool> board_state;

Board::Board(vector<bool> board_state) : board_state(board_state) {}

void Board::print() {
    for (int i=0; i<33; ++i) {
        if (i==0 || i==3 || i==27 || i==30) {
            std::cout << "    ";
        }
        std::cout << board_state[i] << " ";
        if (i==2 || i==5 || i==12 || i==19 || i== 26 || i== 29) {
            std::cout << std::endl;
        }       
    }
}

vector<bool> Board::get_board_state() {
    return board_state;
}