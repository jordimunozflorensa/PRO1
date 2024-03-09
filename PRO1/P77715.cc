/*Write a program that prints if determined sentences are pangrams or are not.
 * Input is a sequence of sentence, each one ended with a dot. Each sentence 
is formed by letters (uppercase or lowercase), spaces and commas.
 * The output prints for each sentence of the input, “YES” or “NO” in a line
indicating if is a pangram.*/

#include <iostream>
#include <vector>
using namespace std;

//Precondition: reads a sequence of characters
//Postcondition: prints if all the characters before a dot form a pangram or 
//not.
void pangrams() {
    char c;
    vector<int> abc ('z' - 'a' + 1, 0);
    while (cin >> c) {
        if (c == '.') {
            int size = abc.size();
            bool pangram = true;
            for (int i = 0; i < size; ++i) {
                if (abc[i] == 0) pangram = false;
                abc[i] = 0;
            }
            if (pangram) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else {
            if (c >= 'A' and c <= 'Z') c += 'a' - 'A';
            if (c >= 'a' and c <= 'z') abc[c - 'a'] = 1;
        }
    }
}

int main() {
    pangrams();    
}
