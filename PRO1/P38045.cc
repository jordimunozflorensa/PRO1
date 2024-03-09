/* Write a program that reads a sequence of natural numbers, and prints the
square and the square root of each one.
 * Input consists of a sequence of natural numbers. */

#include <iostream>
#include <cmath>
using namespace std;

int square(int n) {
    return n*n;
}
double square_root(int n) {
    return sqrt(n);
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);
    int n;
    while (cin >> n) cout << square(n) << " " << square_root(n) << endl;    
}
