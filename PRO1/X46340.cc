#include <iostream>
using namespace std;

int max2(int a, int b) { // does the max of two numbers
    if (a > b) return a;
    else return b;
}
int min2(int a, int b) { // does the max of two numbers
    if (a < b) return a;
    else return b;
}
int sum_min_max(int x, int y, int z) {
    int m;
    int k;
    m = max2(x, y);
    k = max2(m, z);
    int r;
    int s;
    r = min2(x, y);
    s = min2(r, z);
    return min2(r, s) + max2(m, k);
}
int main() {
    int x, y, z;
    while (cin >> x >> y >> z) cout << sum_min_max(x, y, z) << endl;
}
