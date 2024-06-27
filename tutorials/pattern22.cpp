#include <iostream>

using namespace std;

int main() {
    int n, j, i = 1;
    cin >> n;

    while (i <= n) {
        j = n - i;
        while (j > 0) {
            cout << ' ';
            j--;
        }
        j = 0;
        while (j < i) {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}