/*
Write a program that, given an integer number i and a sequence of natural numbers x1, …, xn, prints xi.
Input begins with an integer number i, followed by the sequence x1, …, xn.
Output tells if the position i is correct, print the content of i as it is shown in the examples. Otherwise, print “Incorrect position.”.
*/

#include <iostream>
using namespace std;

int main() { 
    int i;
    cin >> i;
    int position = 0, x, count = 1;
    bool found = false; // if founds the position stops the loop
    
    while (not found and cin >> x) {
        if (count == i) {
            position = x;
            found = true;
        }
        ++count;
    }
    if (found) cout << "At the position " << i << " there is a(n) " << position << "." << endl;
    else cout << "Incorrect position." << endl;
}
