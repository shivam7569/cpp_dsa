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
        j = i + 1;
        while (j <= n) {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
}

/*

12345
 2345
  345
   45
    5

*/