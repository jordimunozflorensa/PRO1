#include <iostream>
using namespace std;

struct Rational {
    int num, den;
};

void read(Rational &R) {
    cin >> R.num >> R.den;
}

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a%b); 
}

Rational simplify(Rational &r) { // d != 0.
    Rational red;
    int divisor = gcd(r.num, r.den);
    red.num = r.num/divisor;
    red.den = r.den/divisor;
    
    if (red.den < 0) {
        red.num = -red.num;
        red.den = -red.den;
    }
    return red;
}

Rational add(Rational &r1, Rational &r2) {
    Rational r;
    r.den = r1.den * r2.den;
    r.num = r1.num * r2.den + r2.num * r1.den;
    return simplify(r);
}

Rational substract(Rational &r1, Rational &r2) {
    Rational r;
    r.den = r1.den * r2.den;
    r.num = r1.num * r2.den - r2.num * r1.den;
    return simplify(r);
}

Rational multiply(Rational &r1, Rational &r2) {
    Rational r;
    r.den = r1.den * r2.den;
    r.num = r1.num * r2.num;
    return simplify(r);
}

Rational divide(Rational &r1, Rational &r2) {
    Rational r;
    r.den = r1.den * r2.num;
    r.num = r1.num * r2.den;
    return simplify(r);
}

void print_rational(Rational &rat) {
    if (rat.num == 0) cout << 0 << endl;
    else if (rat.den == 1) cout << rat.num << endl;
    else cout << rat.num << '/' << rat.den << endl;
}
int main() {
    Rational reference;
    read(reference);
    reference = simplify(reference);
    print_rational(reference);
    string operation;
    while (cin >> operation) {
        Rational r1;
        if (operation == "add") {
            read(r1);
            reference = add(reference, r1);
        }
        else if (operation == "substract") {
            read(r1);
            reference = substract(reference, r1);
        }
        else if (operation == "multiply") {
            read(r1);
            reference = multiply(reference, r1);
        }
        else if (operation == "divide") {
            read(r1);
            reference = divide(reference, r1);
        }
        print_rational(reference);
    }
}
