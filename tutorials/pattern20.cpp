#include <iostream>

using namespace std;

int main() {
    int n, j, i = 0;
    cin >> n;

    while (i < n) {
        j = 0;
        while (j < i) {
            cout << ' ';
            j++;
        }
        j = n - i;
        while (j > 0) {
            cout << "*";
            j--;
        }
        cout << endl;
        i++;
    }
}

/*

*****
 ****
  ***
   **
    *

*/