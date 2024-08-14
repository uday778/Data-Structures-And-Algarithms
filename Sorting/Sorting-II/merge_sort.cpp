#include <iostream>
#include <vector>

using namespace std;

// Function to merge two sorted halves into a single sorted array
void merge(vector<int>& arr, int left, int mid, int right) {
    int i = left;    // Starting index for left subarray
    int j = mid + 1; // Starting index for right subarray
    
    // Temporary vector to store the merged array
    vector<int> temp;

    // Merge the two subarrays into temp using push_back
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }

    // Copy any remaining elements from the left subarray
    while (i <= mid) {
        temp.push_back(arr[i++]);
    }

    // Copy any remaining elements from the right subarray
    while (j <= right) {
        temp.push_back(arr[j++]);
    }

    // Copy the merged elements back into the original array
    for (int k = 0; k < temp.size(); k++) {
        arr[left + k] = temp[k];
    }
}

// Recursive function to perform merge sort
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; // Calculate mid point

        // Recursively sort the first half
        mergeSort(arr, left, mid);

        // Recursively sort the second half
        mergeSort(arr, mid + 1, right);

        // Merge the two sorted halves
        merge(arr, left, mid, right);
    }
}

int main() {
    // Example usage
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    cout << "Original array: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    // Perform merge sort
    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
