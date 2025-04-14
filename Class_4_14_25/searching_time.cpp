#include <iostream> 
#include <vector>
#include <ctime>
using namespace std;

const int HUNDRED_MILLION = 100000000;
const int NOT_FOUND = -1;


/**
 * @brief Creates a random sorted vector of a given size 
 * @param size - size of vector
 * @return vector<int> - vector of values
 */
vector<int> random_sorted_vector(int size) { 
    vector<int> nums;
    int curr = 0;

    for (int i = 0; i < size; i++) { 
        nums.push_back(curr);
        curr += (rand() %5) +1;

    }
    return nums;
}

/**
 * @brief performs a binary search on a vector of numbers
 * @param sorted 
 * @param start_index 
 * @param end_index 
 * @param target 
 * @return int 
 */
int binary_search_helper(vector<int> &sorted, int start_index, int end_index, int target) {
    if (start_index > end_index) {
        return NOT_FOUND;
    }
 
    int mid = (start_index + end_index)/2;
    // Base case
    if (sorted[mid] == target) {
        return mid;
    }

    // Recursive cases:
    if (target < sorted[mid]) {
        return binary_search_helper(sorted, start_index, mid - 1, target);
    }
    else {
        return binary_search_helper(sorted, mid + 1, end_index, target);
    }

    return mid;
}

/**
 * @brief performs binary search on vector of numbers
 * @param sorted 
 * @param target 
 * @return int 
 */
int binary_search(vector<int> &sorted, int target) {
    return binary_search_helper(sorted, 0, sorted.size() - 1, target);
}

/**
 * @brief performs a linear sarch on a vector of numbers
 * @param nums 
 * @param target 
 * @return int 
 */
int linear_search(vector<int> &nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target)
        return i;
    }

    return NOT_FOUND;
}


int main() {

    // test on a very large vector
    vector<int> large = random_sorted_vector(HUNDRED_MILLION);

    cout << "STARTING BINARY SEARCH OF LARGE VECTOR" << endl;
    const clock_t start_time_binary = clock();
    int index_of_45831931 = binary_search(large, 45831931);
    const clock_t end_time_binary = clock();
    const double total_millis_time(((end_time_binary - start_time_binary)* 1000.0)/CLOCKS_PER_SEC);
    cout << total_millis_time << endl;

    cout << "STARTING LINEAR SEARCH OF LARGE VECTOR" << endl;
    const clock_t start_time_linear = clock();
    int linear_index_of_45831931 = linear_search(large, 45831931);
    const clock_t end_time_linear = clock();
    const double total_millis_time_linear(((end_time_linear - start_time_linear)* 1000.0)/CLOCKS_PER_SEC);
    cout << total_millis_time_linear << endl;

    return 0;
}