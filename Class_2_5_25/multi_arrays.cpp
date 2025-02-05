#include <iostream>
#include <string>
using namespace std;

const int ROWS = 2;
const int COLS = 4;

int main()
{
    // data_type array_name[num row][num cols];
    // example
    int numbers[2][3] = {{10, 20, 30}, {100, 200, 300}};
    string letters[ROWS][COLS] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
                            };
    cout << "Letter at [0][0]: " << letters[0][0] << endl;
    letters[0][0] = "Z";
    cout << "Letter at [0][0]: " << letters[0][0] << endl;

    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
            cout << letters[row][col] << " ";
        }
        cout << endl;
    }


    return 0;
}
