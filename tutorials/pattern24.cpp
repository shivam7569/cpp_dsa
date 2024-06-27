#include <iostream>

using namespace std;

int main() {
    int n, j, s, i = 0;
    cin >> n;

    while (i < n) {
        s = ((2 * n - 1) - (2 * i + 1)) / 2;
        j = s;
        while (j > 0) {
            cout << ' ';
            j--;
        }
        j = 0;
        while (j < i + 1) {
            cout << j + 1;
            j++;
        }
        while (j > 1) {
            j--;
            cout << j;
        }
        j = s;
        while (j > 0) {
            cout << ' ';
            j--;
        }
        cout << endl;
        i++;
    }
}

/*

    1    
   121   
  12321  
 1234321 
123454321

*/