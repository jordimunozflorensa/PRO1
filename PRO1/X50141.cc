#include <iostream>
using namespace std;

int max2(int a, int b) { // does the max of two numbers
    if (a > b) return a;
    else return b;
}
int fatten(int x) {
    if (x < 10) return x;
    int prev = fatten(x / 10);
    int actual = x % 10;
    cout << prev;
    prev = max2(prev, actual);
    return prev;
}

int main() {
  int x;
  while (cin >> x) cout << fatten(x) << endl;
}
