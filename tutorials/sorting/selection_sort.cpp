#include <iostream>

using namespace std;

void swap(int arr[], int i, int j) {
    arr[i] = arr[i] + arr[j];
    arr[j] = arr[i] - arr[j];
    arr[i] = arr[i] - arr[j];
}

int min(int arr[], int size, int start) {
    int min_ind, min_val = INT_MAX;

    for (int i = start; i < size; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
            min_ind = i;
        }
    }

    return min_ind;
}

int max(int arr[], int size, int start) {
    int max_ind, max_val = INT_MIN;

    for (int i = start; i < size; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
            max_ind = i;
        }
    }

    return max_ind;
}

int main() {
    int arr[10] = {3, 1, 5, 1, 7, 9, 20, 53, 18, 4};
    int index, i = 0, size = 10;

    int order = 1; // 0 for ascending, 1 for descending

    while (i < size - 1) {
        if (order == 0) {
            index = min(arr, size, i);
        } else {
            index = max(arr, size, i);
        }
        if (index != i) {
            swap(arr, i, index);
        }
        i++;
    }

    for (int j = 0; j < size; j++) {
        cout << arr[j] << ' ';
    }
    cout << endl;
}

// Best case time complexity - O(N^2) [when array is already sorted]
// Worst case time complexity - O(N^2) [when array is reverse sorted]