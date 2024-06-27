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
            cout << i + 1;
            j--;
        }
        cout << endl;
        i++;
    }
}

/*

11111
 2222
  333
   44
    5

*/