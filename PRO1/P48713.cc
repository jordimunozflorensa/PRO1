/*Write a program that reads a sequence of natural numbers and, for each one,
tells if it is a prime number or not. Remember that a natural number is prime 
if and only if it is greater than 1 and it does not have any positive divisor 
other than 1 and itself.
Input consists of a number n, followed by n natural numbers.
The output for every given natural number, tell in a line if it is prime or
not, following the format of the example.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
     
    for (int i= 0; i < n; ++i) {
        int x;
        cin >> x;
                
        bool prime = true;
        int divisor = 2;
        while (prime and divisor*divisor <= x) { // I multiply the 2 divisors
            if (x % divisor == 0) prime = false; // to solve the "hint"
            ++divisor;
        }
        
        if (x > 1 and prime) cout << x << " is prime" << endl;
        else cout << x << " is not prime" << endl;
        
    }
}
