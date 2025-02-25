#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void buckets() {
    srand(time(0));
    int buckets[3] = {0, 0, 0};
    int trials;
    cout << "Enter a number of trials: " << endl;
    cin >> trials;
    for (int i = 0; i < trials; i++){
        int bin = rand() % 3;
        //cout << bin << endl;
       buckets[bin] = buckets[bin] + 1;
    }

    for (int j = 0; j < 3; j++){
        cout << "bucket " << j << ":";
        for (int n = 0; n < buckets[j]; n++){
            cout << "*";
        }
        cout << endl;
    
    }

}

int double_fact(int num) {
    int total = 1;
    for (int i = num; i > 0; i -=2){
        total *=i;
    }
    return total;
}



int main() {
    int answer = double_fact(6);
    cout << answer << endl;
    int my_ints[] = {3, 4, 5, 0, 3, 1, 2, 3};
    //int length = sizeof(my_ints) / sizeof(my_ints[0]);
    int length = 8;
    int i = 0;
    int j = length - 1;
    while (i < j) {
       if (my_ints[j] == 3)
            j--;
       else if (my_ints[i] != 3)
            i++;

       else {
            int temp = my_ints[j];
            my_ints[j] = my_ints[i];
            my_ints[i] = temp;
    
       j--;
       i++;
       }
    
    } 

    for (int index = 0; index < 8; index++){
        cout << my_ints[index] << " ";
    }
    cout << endl;
    cout << 11/2;
    buckets();
    return 0;
}