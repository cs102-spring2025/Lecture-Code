#include <iostream>
using namespace std;

// Method to merge two halves
void merge(int arr[], int left, int mid, int right)
{   
    // find number of elements in left array
    int n1 = mid - left + 1;
    // find number of elements in right array
    int n2 = right - mid;

    // define left array
    int* Left = new int[n1];
    // define right array
    int* Right = new int[n2];

    // Fill the left and right arrays
    for (int i = 0; i < n1; i++)
        Left[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        Right[j] = arr[mid + 1 + j];

    // merge the halves back together
    // place two pointers i and j at beginning of left and right arrays
    // choose the smaller element put it in the final arr and move the corresponding pointer
    int i = 0, j = 0;
    int k = left;
    while (i < n1 && j < n2)
    {
        if (Left[i] <= Right[j])
        {
            arr[k++] = Left[i++];
        }
        else
        {
            arr[k++] = Right[j++];
        }
    }

    // stop the process when one of the pointers has reached the end of array
    // but some elements could be leftover

    // Copy remaining elements of Left[] if any
    while (i < n1)
    {
        arr[k++] = Left[i++];
    }

    // Copy remaining elements of Right[] if any
    while (j < n2)
    {
        arr[k++] = Right[j++];
    }

    // clean up dynamically allocated memory
    delete[] Left;
    delete[] Right;
}

// Method to divide and sort the array
void sort(int arr[], int left, int right)
{
    if (left < right)
    {   // find the midpoint
        int mid = left + (right - left) / 2;

        // Recursively sorting the first and second halves
        sort(arr, left, mid);
        sort(arr, mid + 1, right);
      
        // Merging the sorted halves
        merge(arr, left, mid, right);
    }
}

int main() 
{
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    cout << "Given array is \n";
    for(int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    sort(arr, 0, arr_size - 1);

    cout << "\nSorted array is \n";
    for(int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}