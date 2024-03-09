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

bool is_perfect_prime(int n) {
    int n_aux = n;
    if (n < 10 and primenumber(n)) return true;
    int sum = n%10;
    while (n >= 10) {
        n /= 10;
        sum += n % 10;
    }
    return primenumber(n_aux) and primenumber(sum) and is_perfect_prime(sum);
}

int main() {
    int n;
    while (cin >> n) cout << (is_perfect_prime(n) ? "true" : "false") << endl;
}
