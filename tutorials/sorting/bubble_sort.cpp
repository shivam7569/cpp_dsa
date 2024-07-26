#include <iostream>

using namespace std;

void swap(int arr[], int i, int j) {
    arr[i] = arr[i] + arr[j];
    arr[j] = arr[i] - arr[j];
    arr[i] = arr[i] - arr[j];
}

int main() {
    int arr[50] = {27, 35, -11, -5, 43, 21, 11, -9, -38, -41, 47, -10, 32, 6, 50, 32, 26, -1, 21, 0, 21, 38, -27, -37, 16, -2, -39, -12, 9, -50, 14, 14, -10, 48, -50, 30, 18, 47, 26, -49, -23, 32, 12, 40, 35, 36, 12, -46, -35, -15};
    int size = 50, k = 0;
    bool swaps;

    do {
        swaps = false;
        for (int i = 0; i < size - 1 - k; i++) {
            if (arr[i] > arr[i+1]) {
                swap(arr, i, i + 1);
                swaps = true;
            }
        }
        k++;
    } while (swaps);

    for (int j = 0; j < size; j++) {
        cout << arr[j] << ' ';
    }

    cout << endl;
}

// Best case time complexity - O(N) [when array is already sorted]
// Worst case time complexity - O(N^2) [when array is reverse sorted, for each pass N swaps will be made]