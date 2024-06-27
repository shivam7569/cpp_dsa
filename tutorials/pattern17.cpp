#include <iostream>

using namespace std;

int main() {
    int n, i, j;
    cin >> n;
    i = n;

    char c;

    while (i > 0) {
        c = 65 + i - 1;
        j = 0;
        while (j <= n - i) {
            cout << c;
            c++;
            j++;
        }
        cout << endl;
        i--;
    }
}