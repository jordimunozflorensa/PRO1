/* Write a program that prints the number of short words (less than five 
letters), medium (between five and nine letters), and long (more than 
nine letters).
 * The input consists of a line with letters and dashes, finished with a dot.
 * The output prints a line with the number of short, medium and long words 
separated by commas. */

#include <iostream>
using namespace std;

// Precondition: reads a list of charachters that ends with a dot.
// Postcondition: prints how many short, medium and long words are in the seq.
void words_between_dashes () {
    char c;
    int short_word = 0, medium_word = 0, long_word = 0, count = 0;
    while (cin >> c) {
        if (c == '-' or c == '.') {
            if (count == 0);
            else if (count < 5) ++short_word;
            else if (count < 10) ++medium_word;
            else ++long_word;
            count = 0;
            }
        else ++count;
    }
    cout << short_word << "," << medium_word << "," << long_word << endl;
}

int main() {
    words_between_dashes();
}
