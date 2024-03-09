/* Write a program that reads sequences of integer numbers and prints the
 * maximum value of each sequence.
 * Input contains several sequences. Each sequence begins with its number 
 * of elements n > 0, followed by n integer numbers.
 * The output prints the maximum of every sequence, one per line. */
#include <iostream>
using namespace std;

int main() {
    int nelem, elem, max;
    
    while (cin >> nelem) {
        cin >> max;
        for (int i = 1; i < nelem; ++i) {
            cin >> elem;
            if (elem > max ) max = elem;
        }
        cout << max << endl;
    }
}
