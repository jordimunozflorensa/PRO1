/*Given a sequence of words, print the length of the longest consecutive
 * subsequence that only contains the first word. That is, if the sequence is
 * s1, …, sn, print 
Input consists of a non-empty sequence of words.
Output prints the number of words of the longest consecutive subsequence that
 * only contains the first word.*/

#include <iostream>
using namespace std;

int main() {
    string word; // fixed word
    cin >> word;
    string nextword; // words to compare
    int add = 1; // number of words equal to the initial one
    int acc = 1;

    while (cin >> nextword){
        if (word == nextword) ++acc; // sums one to the total of words
        else acc = 0; // returns to the counting start
        if (add < acc) add = acc; // if the adder is smaller than the
                                  // accountant takes the value of it.
    }
    cout << add << endl; 
}
