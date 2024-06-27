#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;

    while (i <= n) {
        int j = 0;
        while (j < i) {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}

/*

1
22
333
4444
55555

*/