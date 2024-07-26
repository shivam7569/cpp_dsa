#include <math.h>
#include <iostream>

using namespace std;

int main() {
    long long int bits;
    int last_bit, p = 0, dec = 0;
    cin >> bits;

    while (bits != 0) {
        last_bit = bits % 10;
        dec += pow(2, p) * last_bit;
        bits /= 10;
        p++;
    }

    cout << dec << endl;
}