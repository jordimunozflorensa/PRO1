/* Write a function that returns the maximum of four given integer numbers a,
b, c and d. */

#include <iostream>
using namespace std;

int max2(int a, int b) { // does the max of two numbers
    if (a > b) return a;
    else return b;
}
int max4(int a, int b, int c, int d) { // does the max of 4 numbers
    int z;
    int k;
    z = max2(a, b);
    k = max2(c, d);
    return max2(z, k);
}

int main() {
    int x, y, z, w;
    cin >> x >> y >> z >> w;
    int m = max4(x, y, z, w);
    cout << m << endl;
}
