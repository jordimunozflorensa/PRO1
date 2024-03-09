/*Write a program that reads non-empty sequences of real numbers and, for each
sequence, prints its minimum, its maximum and its average.
 * Input consists of a natural number n, followed by n sequences. Each sequence
begins with the number of elements m > 0, followed by m real numbers.
 * Output prints in a line and with four digits after the decimal point its
minimum, its maximum and its average, for every sequence. */

#include <iostream>
using namespace std;

int main() {
    int ns; // number of sequences
    cin >> ns;
    
    for (int i = 0; i < ns; ++i) {
        int ne; // number of elements in each sequence
        double x, max = 0, min = 0, average = 0, compt = 1;
        cin >> ne;
        cin >> x;
        max = min = average = x;
        
        for (int j = 1; j < ne; ++j) {
            cin >> x;
            if (x > max) max = x;
            if (x < min) min = x;
            average += x;
            ++compt;
        }
        cout.setf(ios::fixed);
        cout.precision(4);
        cout << min  << " " << max << " " << average/compt << endl;
    }
}
