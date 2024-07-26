#include <math.h>
#include <iostream>

using namespace std;

int main() {
    int n, bit, p = 0;
    cin >> n;
    long long int dec = 0;

    while (n != 0) {
        bit = n % 2;
        n /= 2;
        dec += pow(10, p) * bit;
        p++;
    }
    cout << dec << endl;
}