#include <iostream>
#include <string>

using namespace std;

const int ROWS = 6;
const int COLS = 7;

void print_board(const string board[][COLS]);
// print out connect4 board

int main() {
    string connect4[ROWS][COLS] =  {{".", ".", ".", ".", ".", "b", "."},
                                    {".", ".", ".", ".", ".", "r", "."},
                                    {"r", ".", ".", ".", ".", "b", "."},
                                    {"b", ".", ".", ".", ".", "r", "."},
                                    {"r", "b", ".", "r", ".", "b", "."},
                                    {"r", "r", "b", "r", ".", "b", "b"}};
    print_board(connect4);
    return 0;                             
}

//Example: print function
/**
 * @brief Prints board nicely
 * NOTE: You must pass the number of columns, otherwise C++ is unhappy
 * @param board - the board you are printing
 */
void print_board(const string board[][COLS]) {
    cout << "-------------" << endl;
    for (int row = 0; row < ROWS; row++){
        for (int col = 0; col < COLS; col++){
            cout << board[row][col] << " ";
        }
        cout << endl;
    }
    cout << "-------------" << endl;
}

