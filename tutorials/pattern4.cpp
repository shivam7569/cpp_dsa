#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;

    while (i <= n*n) {
        int j = 0;
        while (j < n) {
            cout << i << ' ';
            i++;
            j++;
        }
        cout << endl;
    }
}