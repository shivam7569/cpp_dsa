#include <iostream>

using namespace std;

int main() {

    int n, j, i = 0;
    cin >> n;

    char c = 65;

    while (i < n) {
        j = 0;
        while (j <= i) {
            cout << c;
            j++;
        }
        cout << endl;
        c++;
        i++;
    }
}

/*

A
BB
CCC
DDDD
EEEEE

*/