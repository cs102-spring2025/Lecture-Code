/**
 * @file poems.cpp
 * @author 
 * @brief 
 * @date 
 */


/* ------- Do not change anything in this section (below) ------- */

#include <iostream>
#include <climits>
#include <string>

using namespace std;

const int ROWS = 9;
const int COLS = 5;

const string HIRAGANA[ROWS][COLS] = 
                        {{ "a",   "i",   "u",  "e",  "o"},
                         {"ka",  "ki",  "ku", "ke", "ko"},
                         {"sa", "shi",  "su", "se", "so"},
                         {"ta", "chi", "tsu", "te", "to"},
                         {"na",  "ni",  "nu", "ne", "no"},
                         {"ha",  "hi",  "hu", "he", "ho"},
                         {"ma",  "mi",  "mu", "me", "mo"},
                         {"ra",  "ri",  "ru", "re", "ro"},
                         {"ya",  "wa",  "yu",  "n", "yo"}
                        };

const int A = 125;
const int C = 11;
const int MOD = 1024;

const int SYL_IN_WORD_MAX = 5;
const int NUM_LINES_MAX = 15;
const int NUM_SYLS_MAX = 40;

/**
 * @brief A pseudo-random number generator
 * Note: seed is an *optional parameter*. If an argument is passed to this
 * function, the state will be reset to this seed. Otherwise, if you call the
 * function with no arguments, seed will be set to the default of INT_MIN.
 * When this happens, the state will be updated to the next pseudo-random
 * number. Either way, the state is returned.
 * 
 * @param seed (optional) - When passed, resets the seed
 * @return int - The pseudo-random integer.
 */
int rand_int(int seed = INT_MIN) {
    static int state = 0;

    if (seed != INT_MIN) {
        // If a seed is passed, then set/reset the state
        state = seed;
    }
    else {
        // Otherwise, update the state to the next pseudo-random number
        state = (A * state + C) % MOD;
    }

    return state;
}

/* ------- Do not change anything in the section above ------- */


// Controls operation of program
int main() {
    int seed = 100;
    int random_num;

    rand_int(seed);
    for (int i = 0; i < 15; i++) {
        random_num = rand_int();
        cout << random_num << " ";
    }
    cout << endl;

    return 0;
}
