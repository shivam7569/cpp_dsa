#include <iostream>

using namespace std;

int main() {
    int n, j, i = 0;
    cin >> n;

    while (i < n) {
        char c = 65;
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