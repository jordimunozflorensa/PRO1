// Write a program that computes the number of digits in several bases.

#include <iostream>
using namespace std;

int main() {
    int x, y; // Input consists of a sequence of pairs of natural numbers b and n, such that b≥ 2 and n≥ 1.
     
    while (cin >> x >> y) {
        int sum = 0;
        
        while (y > 0) {
            y /= x;
            ++sum;
        }      
        cout << sum << endl; // The number of digits of n in base b. 
    }
    
}
