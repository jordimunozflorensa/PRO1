#include <iostream>
using namespace std;

// Precondition: reads a natural number bigger than 0.
// Postcondtion: prints the sum of the number.
int sum_of_digits (int n) {
    if (n < 10) return n;
    return n%10 + sum_of_digits(n/10);
}
// Precondition: reads the sum of a number.
// Postcondtion: prints if its multiple of three.
bool is_multiple_3(int n){
    int x = sum_of_digits(n);
    if (x < 10) return (x == 3 or x == 6 or x == 9);
    else return is_multiple_3(x);
}
int main() {
    int n;
    while (cin >> n) {
        int m = sum_of_digits(n);
        bool mult = is_multiple_3(m);
        cout << mult << endl;
    }
}
