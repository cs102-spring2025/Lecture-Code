#include <iostream>
#include <string>
using namespace std;
const int ROWS = 6;
const int COLS = 7;

string four_in_a_row(string board[ROWS][COLS], int row, int col) {

    string color = board[row][col];
    if (color == ".")
        return "neither";

    if (col + 3 >= COLS)
        return "neither";

    for (int i = col; i <= col + 3; i++)
    {
        if (board[row][i] != color)
            return "neither";
    }

    if (color == "r")
        return "red";
    else
        return "black";

}
int main() {

    string connect4[ROWS][COLS] =  {{".", ".", ".", ".", ".", "b", "."},
                                    {".", ".", ".", ".", ".", "r", "."},
                                    {"r", ".", ".", ".", ".", "b", "."},
                                    {"b", ".", ".", ".", ".", "r", "."},
                                    {"r", "b", ".", "r", ".", "b", "."},
                                    {"r", "r", "r", "r", ".", "b", "b"}};

    cout << four_in_a_row(connect4, 5, 0) << endl;
    return 0;
}