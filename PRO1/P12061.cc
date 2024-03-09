/* Write a program that, given a sequence of words, prints the number of words
 * between the word “beginning” and the word “end”. If the word “beginning”, 
 * the word “end” or both words are missing, or if they appear in inverse 
 * order, tell so.
Input consists of several words. The words “beginning” and “end” appear, at 
 * most, once.
Output prints the number of words between the word “beginning” and the word 
 * “end”, if these appear in this order. Otherwise, print “wrong sequence”. */

#include <iostream>
using namespace std;

int main() {
    
    string word;
    bool start = false; // checks if the word is the start of the counting
    bool end = false; // checks if the counting has ended
    bool posible = true; // checks if the counting it's posible
    int count = 0;
    
    while (cin >> word and posible and not end) {
        if (word == "end" and start) end = true;
        else if (word == "beginning") start = true;
        else if (word == "end" and not start) posible = false; 
        else {
            if (start) ++count;
        }
    }
    if (end) cout << count << endl;
    else cout << "wrong sequence" << endl;
}
