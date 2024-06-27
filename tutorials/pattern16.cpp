#include <iostream>

using namespace std;

int main() {
    int n, j, i = 0;
    cin >> n;

    char c;

    while (i < n) {
        c = 65 + i;
        j = 0;
        while (j <= i) {
            cout << c;
            c++;
            j++;
        }
        cout << endl;
        i++;
    }
}

/*

A
BC
CDE
DEFG
EFGHI

*/