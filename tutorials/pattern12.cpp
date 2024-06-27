#include <iostream>

using namespace std;

int main() {
    int n, j, i = 0;
    cin >> n;

    char c = 65;

    while (i < n) {
        j = 0;
        while (j < n) {
            cout << c;
            c++;
            j++;
        }
        cout << endl;
        i++;
    }
}

/*

ABC
DEF
GHI

*/