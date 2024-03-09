#include <iostream>
using namespace std;

void swap2(int& a, int& b) {
    int k = a;
    a = b;
    b = k;
}

int main() {
    int x, y;
    while (cin >> x >> y) {
        swap2(x, y);
        cout << x << y << endl;
    }
}
