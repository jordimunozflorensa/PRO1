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
        char op;
        cin >> op;
        int y = fn();
        cin >> c;
        if (op == '*') return x*y;
        else if (op == '+') return x+y;
        else return x-y;
    }
}
int main () {
    cout << fn() << endl;
}
