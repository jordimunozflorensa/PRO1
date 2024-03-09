#include <iostream>
using namespace std;

bool primenumber(int& n) {
    bool prime = true;
    if (n <= 1) prime = false;
    if (n == 2) prime = true;
    else {
        int divisor = 2;
        while (prime and divisor*divisor <= n) {
            if (n % divisor == 0) prime = false;
            ++divisor;
            } 
    }
    return prime;
}

int main () {
    int n;
    while (cin >> n and primenumber(n)) {
        if (n <= 2) ++n;
        else n += 2;
        if (primenumber(n)) cout << n << endl;
        else {
            while (not primenumber(n))
                n += 2;
            if (primenumber(n)) cout << n << endl;
        }
    }
        
    
}
