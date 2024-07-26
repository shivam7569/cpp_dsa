#include <iostream>

using namespace std;

void reverseArr(int arr[], int size) {
    int mid, a, b;
    if (size % 2 == 0) {
        mid = size / 2;
    } else {
        mid = (size - 1) / 2;
    }

    for (int i = 0; i < mid; i++) {
        arr[i] = arr[i] + arr[size - (i + 1)];
        arr[size - (i + 1)] = arr[i] - arr[size - (i + 1)];
        arr[i] = arr[i] - arr[size - (i + 1)];   
    }
}

int main() {
    int size = 6;
    int arr[6] = {1, 2, 3, 4, 5, 6};

    reverseArr(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
}