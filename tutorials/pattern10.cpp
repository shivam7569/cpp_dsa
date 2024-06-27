#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 0, j;
    char c = 65;

    while (i < n) {
        j = 0;
        while (j < n) {
            cout << c;
            j++;
        }
        cout << endl;
        c = c + 1;
        i++;
    }
}