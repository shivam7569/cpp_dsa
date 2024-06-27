#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int i = 1;

    while (i <= n) {
        int j = i;
        while (j < 2*i) {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
}

/*

1
23
345
4567
56789

*/