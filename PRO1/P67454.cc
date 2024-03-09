/*Write a program that reads a sequence of characters and prints the number of 
 * letters ‘a’ in the sequence before the first period. 
Input consists of a sequence of characters with at least one period.
Output prints the number of times that ‘a’ appears in the sequence before the 
first period.*/

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
    cout << sum << endl;
}
