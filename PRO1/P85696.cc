#include <iostream>
using namespace std;

struct Rational {
    int num, den;
};

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a%b); 
}

// void read(Rational &R) {
//     cin >> R.num >> R.den;
// }

Rational rational(int n, int d) { // d != 0.
    Rational R;
    int divisor = gcd(n, d);
    R.num = n/divisor;
    R.den = d/divisor;
    
    if (R.den < 0) {
        R.den = -R.den;
        R.num = -R.num;
    }
    return R;
}

// int main() {
//     Rational R;
//     read(R);
//     Rational result = rational(R.num, R.den);
//     cout << result.num << ' ' << result.den << endl;
// }
