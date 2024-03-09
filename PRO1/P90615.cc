#include <iostream>
#include <cmath>
using namespace std;

int max(int x, int y) {
    return x > y ? x : y;
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    cout << max(z, max(x,y)) << endl;
}
