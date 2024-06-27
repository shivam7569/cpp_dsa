#include <iostream>

using namespace std;

int main() {
    int n, i, j;
    cin >> n;
    i = n;

    while (i > 0) {
        j = 1;
        while (j <= i) {
            cout << j;
            j++;
        }
        j = 2 * (n - i);
        while (j > 0) {
            cout << "*";
            j--;
        }
        j = i;
        while (j > 0) {
            cout << j;
            j--;
        }
        cout << endl;
        i--;
    }
}

/*

1234554321
1234**4321
123****321
12******21
1********1

*/