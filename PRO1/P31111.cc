/*Given a sequence made up of only ‘(’ and ‘)’, tell if the parentheses close
 * correctly.
Input consists of a sequence of parentheses.
Output prints “yes” or “no”, depending on whether the parentheses close
 * correctly or not.
*/

#include <iostream>
using namespace std;

int main() {
    char c;
    int open = 0; // counts the number of open parentheses
    int closed = 0; // counts the number of closed parentheses
    bool correct = true; // checks if the parentheses are correctly closed
    
    while (cin >> c) {
        if (c == '(') ++open;
        else {
            ++closed;            
            if (closed > open) correct = false; // says if it's correctly 
                                                // closed, if not stops.
        }
    }
    if (correct and open == closed) cout << "yes" << endl;
    else cout << "no" << endl;
}
