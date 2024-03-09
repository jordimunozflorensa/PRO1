/* Write a program that, given a sequence of lines with words, tells which is 
the last line that has the words in increasing (lexicographic) order.
 * Input consists of a sequence of lines with words. Each line begins with a 
number n, followed by n words made up of only lowercase letters.
 * Output prints the index of the last line with the words in 
(not necessary strictly) increasing order. If there is no such line, tell so.*/

#include <iostream>
using namespace std;

int main() {
    int n, count = 0, last = 0; // last is the integer that takes the number 
                                // of the last line
    string s, prevword;
    while (cin >> n) {
        ++count;
        bool increasing = true;
        if (n > 0) cin >> prevword;
        for (int i = 1; i < n; ++i) {
            cin >> s;
            if (s < prevword) increasing = false;
            prevword = s;
        }
        if (increasing) last = count;
    }
    if (last != 0) cout << "The last line in increasing order is " << last 
    << "." << endl;
    else cout << "There is no line in increasing order." << endl;
}
