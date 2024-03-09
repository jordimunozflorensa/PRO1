/* Write a program that, given a sequence of integer numbers strictly positive
 * ended with 0, prints if contains any peak greater than 3143 (the height of 
 * Pica d’Estats). A peak is an integer of the sequence that has a predecessor
 * and a successor and it is strictly greater than them.
Input is a sequence of integer numbers strictly positive ended with 0. 
 * At least, always there are three integer numbers (not counting the 0).
The output must be “YES” if there is any peak greater than 3143, and “NO” 
 * otherwise. */

#include <iostream>
using namespace std;

int main() {
    int x, y, z; // z is the one that is beeing printed
    cin >> x >> y >> z;
    bool found = false; // checks if a peak has been found or not
    while (z != 0 and not found) {
        if (x <= 3143 and y > 3143 and z <= 3143) 
            found = true;
        x = y; y = z; // rename the value of the variables
        cin >> z;
    }
    if (found) cout << "YES" << endl;
    else cout << "NO" << endl;
}
