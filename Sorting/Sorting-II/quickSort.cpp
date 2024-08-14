#include <bits/stdc++.h>
using namespace std;

int partitionIndex(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    
    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partitionIndex(arr, low, high);
        qs(arr, low, pivotIndex - 1);
        qs(arr, pivotIndex + 1, high);
    }
}

vector<int> quickSort(vector<int>& arr) {  // Pass by reference
    qs(arr, 0, arr.size() - 1);
    return arr;
}

int main() {
    vector<int> arr = {8, 3, 1, 7, 0, 10, 2};
    vector<int> sortedArr = quickSort(arr);
    
    // Output the sorted array
    cout << "Sorted array: ";
    for (int i : sortedArr) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}
