#include <iostream>

using namespace std;

int main() {
    int size = 9;
    int arr[9] = {5, 2, 6, 2, 7, 78, 0, 1, 65};
    int j, k;

    for (int i = 0; i < size; i+=2) {
        j = i + 1;
        if (j < size) {
            arr[i] = arr[i] + arr[j];
            arr[j] = arr[i] - arr[j];
            arr[i] = arr[i] - arr[j];
        }
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
}