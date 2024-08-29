#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];  // The last element is the pivot
    int i = low - 1;        // Index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);  // Swap arr[i] with arr[j]
        }
    }
    // Swap the pivot element with the element at i+1
    swap(arr[i + 1], arr[high]);

    return i + 1;  // Return the partitioning index
}

void quicksort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // Partition the array and get the pivot index
        int pi = partition(arr, low, high);
        
        // Recursively apply quicksort to sub-arrays
        quicksort(arr, low, pi - 1);  // Left sub-array
        quicksort(arr, pi + 1, high);  // Right sub-array
    }
}

int main() {
    vector<int> arr = {10, 16, 8, 12, 15, 6, 3, 9, 5};

    int n = arr.size();
    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
