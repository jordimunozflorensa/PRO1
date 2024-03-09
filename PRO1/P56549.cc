#include <iostream>
using namespace std;

void base2(int n) {
    if (n < 2) cout << n;
    else {
        base2(n/2);
        cout << n%2;
    }
}

void base8(int n) {
    if (n < 8) cout << n;
    else {
        base8(n/8);
        cout << n%8;
    }
}

void base16(int n) {
    char c;
    if (n < 16) {
        if (n < 10) cout << n;
        else {
            c = 'A' + n - 10;
            cout << c;
        }
    }
    else {
        base16(n/16);
        if (n%16 > 9) {
            c = 'A' + (n%16) - 10;
            cout << c;
        }
        else cout << n%16;
    }
}

int main() {
    int n;
    while (cin >> n) {
        cout << n << " = ";
        base2(n);
        cout << ", ";
        base8(n);
        cout << ", ";
        base16(n);
        cout << endl;
    }
}
