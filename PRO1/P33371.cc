#include <iostream>
using namespace std;
// Precondition: c is a letter
// changes the character c for a constant k
char encoded(char c, int k) {
    int noletter;
    noletter = (c - 'a') + 'A' + k;
    if (noletter > 'Z') noletter = (noletter + 'A')%26 + 'A';
    return noletter;
}    

int main() {
    char c;
    int k;
    while (cin >> k) {
        cin >> c;
        while (c != '.') {
            if (c == '_') cout << ' ';
            else if (c >= 'a' and c <= 'z') cout << encoded(c, k);
            else cout << c;
            cin >> c;
        }
        cout << endl;
    }
}

