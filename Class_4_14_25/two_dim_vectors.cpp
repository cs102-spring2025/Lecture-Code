#include<iostream>
#include<vector>
using namespace std;

int main(){

    /* This method of initialization is syntax of C++11 and 
    * your compiler most likely defaults to something else.
    * To compile this g++ -std=c++11 -o test two_dim_vectors.cpp
    */
  
    vector<vector<int>> my_grid {{1, 0, 1}, {0, 1, 2}, {1, 0, 1}}; 
	for(int i=0;i < my_grid.size();i++){
		for(int j=0;j < my_grid[i].size();j++)
			cout<< my_grid[i][j] <<" ";
		cout<<endl;
	}	
    
    /* Another example of 2D vectors with input from user
    */ 
    int rows = 2;
    int cols = 2;
    int num = 0;

    vector<vector<int>> grid;
    for (int r = 0; r < rows; r++) {
        vector<int> row;
        for (int c = 0; c < cols; c++) {
            cout << "Enter a number: ";
                 cin >> num;
            row.push_back(num);
        }
        grid.push_back(row);
    }

    // access elements in 2D
    cout << grid[0][1];
    cout << " ";
    cout << grid[1][1];
    cout << endl;

    // using for loop
    for(int i=0;i < grid.size();i++){
		for(int j=0;j < grid[i].size();j++)
			cout<< grid[i][j] <<" ";
		cout<<endl;
	}	

}

 