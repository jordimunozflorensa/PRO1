/*Write a program that reads a sequence of characters ended in a dot and tells
if the sequence has any lowercase ‘a’ or not.
Input consists of a sequence of characters ended in ‘.’.
Output consists in printing “yes” or “no” depending on whether ‘a’ appears in the sequence or not.
*/
#include <iostream>
using namespace std;

int main() {
    char c; // sequence of characters 
    cin >> c;
    int sum = 0; // sum contains number of a'
    while (c != '.') {
        if (c == 'a') ++sum;
        cin >> c;        
    }
    if (sum != 0) cout << "yes" << endl;
    else cout << "no" << endl;
}

