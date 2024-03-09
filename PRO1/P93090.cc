#include <iostream>
using namespace std;

struct Fraction {
    int num, den;
};

void read(Fraction &R) {
    cin >> R.num >> R.den;
}

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a%b); 
}

void simplify(Fraction &r) { // d != 0.
    int divisor = gcd(r.num, r.den);
    r.num = r.num/divisor;
    r.den = r.den/divisor;
}

Fraction addition(const Fraction& x, const Fraction& y) {
    Fraction r;
    r.den = x.den * y.den;
    r.num = x.num * y.den + y.num * x.den;
    return r;
}

int main() {
    Fraction reference, acomulated;
    acomulated.den = 1;
    acomulated.num = 0;
    char c;
    cin >> reference.num >> c >> reference.den >> c;
    while (c != '=') {
        simplify(reference);
        acomulated = addition(reference, acomulated);
        simplify(acomulated);
        cin >> reference.num >> c >> reference.den >> c;
    }
    simplify(reference);
    acomulated = addition(reference, acomulated);
    simplify(acomulated);
    cout << acomulated.num << '/' << acomulated.den << endl;
}
