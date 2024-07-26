#include <iostream>

using namespace std;

int binary_search(int arr[], int size, int key) {

    int result = -1, start = 0, end = size - 1;

    while (true) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            result = mid;
            break;
        } else {
            if (key > arr[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        if (start > end) {
            break;
        }
    }

    return result;
}

// works in O(logN)

int main() {
    int arr[10] = {-5, -2, 0, 11, 15, 32, 56, 77, 78, 90};
    int size = 10;
    int key;

    cin >> key;

    cout << binary_search(arr, size, key) << endl;
}