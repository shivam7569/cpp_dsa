#include <iostream>

using namespace std;

int main() {
    int n = 10, sum;
    int a = 0, b = 1;

    cout << a << ' ' << b << ' ';

    for (int i = 1; i <= n - 2; i++) {
        sum = a + b;
        cout << sum << ' ';
        a = b;
        b = sum;
    }
}