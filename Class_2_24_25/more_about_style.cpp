/**
 * @file more_about_style.cpp
 * @author Karyn Doke
 * @brief demonstrates style guidelines
 * @version 0.1
 * @date 2025-02-23
 */

#include <iostream>
#include <string>
using namespace std;

const int SALARY = 20000; // no no
// NEW - do not use global variables unless a constant

int add_two_numbers(int x, int y);
// does something

int main() { 
    string proper_indentation = "four_spaces";

    /**
     * Correct placement of curly braces
     * open { on first line with space after () OR
     * open { on next line flush with closing }.
     * Choose one method and be consistent.
     */
    for (int i = 0; i < 1900; i++) {
        // correct spacing around operators
        i = i + 100;
    }

    /*
    * reasonable variable names using lower_case OR camelCase HOWEVER
    * choose one method and be consistent
    */
    int bottles_of_beer = 99;
    int bottlesOfBeer = 98;

    // 
    int answer = add_two_numbers(bottles_of_beer, bottlesOfBeer);

    // NEW - avoid while (true), never compare against true or false
    bool flag = true;
    while (flag) {
       // bool flag = true;
       int x = 2;
        cout << "infinite_loop";
        if (flag == true) {
            cout << "do_not_compare_like_this";
        }
        if (x == 2){
            flag = false; 
        }
       
    }

    // NEW - avoid using a full if statement to then return true or false
    if (bottles_of_beer == 99) {
        cout << bottles_of_beer << "sitting on my shelf";
    else
        cout << "need to have more bottles";
    }

    // NEW - no magic numbers that appear in code without being given a variable or
    // constant variable
    int salary = 20000 * workedhours;
    // what is the meaning of 20000?

    return 0;
}


/*
 * NEW All functions are well designed: each function fits on screen
 * with no more than 20 lines of code and each function does one job.
 * You need to create useful helper functions.
 */

/**
 * @brief adds two numbers
 * @param x 
 * @param y 
 * @return int
 */
int add_two_numbers(int x, int y) {
    int total = x + y;
    return total;
}