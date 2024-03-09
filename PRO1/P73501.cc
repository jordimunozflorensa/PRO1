/* Write a program that reads sequences of natural numbers, and that for each
 * one prints the number of pairs of consecutive numbers such that the second
 * number of the pair is greater than the first one.
Input consists of a natural number n, followed by n sequences of strictly
positive natural numbers. Each sequence ends with a zero.
The output gives prints in a line the number of pairs of consecutive numbers 
such that the second number of the pair is greater than the first one.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0; // counting pairs
    int elem, prev = 0; // actual element and previous element
    bool first = true; // checks if the sequence has ended or not
    
    while (cin >> elem) {
        if (elem != 0) {
            if (not first and elem > prev) ++count;
            prev = elem;
            first = false;
        }
        else {
            cout << count << endl;
            count = 0;
            first = true;
        }            
    }
}
