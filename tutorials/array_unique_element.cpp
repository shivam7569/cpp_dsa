#include <iostream>

using namespace std;

int main() {
    int size = 9;
    int arr[9] = {0, 1, 6, 9, 9, 1, 0, 6, 4};

    int unique = 0;

    for (int i = 0; i < size; i++) {
        unique = unique ^ arr[i];
    }
    

    cout << unique << endl;
}
