#include <iostream>
using namespace std;

int fn() {
    char c;
    cin >> c;
    if (c >= '0' and c <= '9') {
        return int (c - '0');
    }
    else {
        int x = fn();
        int y = fn();
        if (c == '*') return x*y;
        else if (c == '+') return x+y;
        else return x-y;
    }
}
int main () {
    cout << fn() << endl;
}
