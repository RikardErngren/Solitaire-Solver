#include <vector>
#include <iostream>


using std::vector;
class Board {
private:
    const int rows = 7;
    const int cols = 7;
    vector<bool> grid;
public:
    Board() : grid(vector<bool>(33, true)) {
        grid[16] =  false;
    }

    void print() {
        for (int i=0; i<grid.size(); ++i) {
            if (i==0 || i==3 || i==27 || i==30) {
                std::cout << "    ";
            }
            std::cout << grid[i] << " ";
            if (i==2 || i==5 || i==12 || i==19 || i== 26 || i== 29) {
                std::cout << std::endl;
            }       
        }
            
    }

    vector<bool> get_grid() {
        return grid;
    }

};


int main() {
    Board board;
    board.print();
}