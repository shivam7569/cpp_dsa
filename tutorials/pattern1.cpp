#include <iostream>

using namespace std;

int main() {
    int r;
    cin >> r;

    int i = 0;

    while (i < r) {
        int j = 0;
        while (j < r) {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}

/*

*****
*****
*****
*****
*****

*/