// Write a program that reads pairs of numbers n and m with n ≥ m, and for each pair prints Hn − Hm.

#include <iostream>
using namespace std;

// Input consists of several pairs of natural numbers n and m such that n ≥ m.
int main () {
    int x, y;
    
    while (cin >> x >> y) {
        double sum1 = 0.0; // first harmonic number
        int i = x;
        
        while (i > y) {
            if (i <= x) sum1 += 1.0/i;
            --i;
        }   
        
        cout.setf(ios::fixed);
        cout.precision(10);
        
        cout << sum1  << endl; // For every pair, print 
                               // Hn − Hm with 10 digits
                               // after the decimal point.
    }
}
