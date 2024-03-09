#include <iostream>
using namespace std;

int mcd(int a, int b) {
    while (b != 0 ) {
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}
void read_rational(int& num, int& den) {
    char c;
    cin >> num >> c >> den;
    int mcd1 = mcd(num,den);
    
    num /= mcd1;
    den /= mcd1;
}
