#include<iostream>
#include<vector>
using namespace std;

int main(){

    // This method of initialization is syntax of C++11 and 
    // your compiler most likely defaults to something else.
    // To compile this g++ -std=c++11 -o test two_dim_vectors.cpp
	vector<vector<int>> grid {{1, 0, 1}, {0, 1, 2}, {1, 0, 1}}; 
	for(int i=0;i < grid.size();i++){
		for(int j=0;j < grid[i].size();j++)
			cout<< grid[i][j] <<" ";
		cout<<endl;
	}					   
}

 