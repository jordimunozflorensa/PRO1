#include <iostream>
using namespace std;

void base2(int x, int y) {
    if (x < 2) cout << x;
    if (y < 2) cout << y;
    else {
        base2(x/2, y/2);
        cout << x%2;
        cout << y%2;        
    }
}

int main() {
    int x, y;
    while (cin >> x >> y) {
        base2(x, y);
        cout << endl;
    }
}
