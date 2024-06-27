#include <iostream>

using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "Lower Case" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "Upper Case" << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "Numeric" << endl;
    }
}