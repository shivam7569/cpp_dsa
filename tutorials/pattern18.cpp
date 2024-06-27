#include <iostream>

using namespace std;

int main() {
    int n, j, i = 1;
    cin >> n;

    while (i <= n) {
        j = 0;
        while (j < (n - i)) {
            cout << ' ';
            j++;
        }
        j = 0;
        while (j < i) {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}

/*

    *
   **
  ***
 ****
*****

*/