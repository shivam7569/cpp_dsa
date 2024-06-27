#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1, row = 1;

    while (i <= n) {
        int j = 0;
        while (j < row) {
            cout << i;
            i++;
            j++;
        }
        cout << endl;
        row++;
    }
}