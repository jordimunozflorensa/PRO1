#include <iostream>
using namespace std;

int main() {
    char c; cin >> c;
    cout << (c >= 'A' and c <= 'Z' ? char(c + 'a' - 'A') : char(c - 'a' + 'A')) << endl;
}