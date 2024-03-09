/*Write a program that, given a sequence of lines with words, tells which is 
the first line that has the words in increasing (lexicographic) order.
 * Input consists of a sequence of lines with words. Each line begins with a
number n, followed by n words made up of only lowercase letters.
 * Output prints the index of the first line with the words in 
(not necessary strictly) increasing order. If there is no such line, tell so.
 */

#include <iostream>
using namespace std;

int main() {
    int n, count = 1;
    string s, prevword;
    bool found = false; // if finds a line in increasing order stops
    
    while (cin >> n and not found) {
        found = true;
        cin >> prevword;
        for (int i = 2; i <= n; ++i) {
                cin >> s;
                if (s < prevword) found = false;
                prevword = s;
        }
        if (found) cout << "The first line in increasing order is " << count 
        << "." << endl;
        ++count;
    }
    if (not found) cout << "There is no line in increasing order." << endl;
}
