/*
Write a program that, given an integer number i and a sequence of natural
numbers x1, …, xn, prints xi.
Input begins with a number i, followed by the sequence x1, …, xn ended with
−1. It is known that 1 ≤ i ≤ n.
Output prints the content of the position i as it is shown in the examples.
*/
#include <iostream>
using namespace std;

int main() {
    int i;
    cin >> i;
    int position = 0, x, count = 1;
    while (cin >> x and x != -1) {
        if (count == i) position = x;
        ++count;              
    }
     cout << "At the position " << i << " there is a(n) " << position << "." << endl;
}
