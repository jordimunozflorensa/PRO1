/* Given a sequence of words, we wish to know:
    1- Which is the average length L of its words.
    2- For every word with length L or longer, which is the most frequent
    letter (the smallest in lexicographic order in case of ties).
The input is formed by a natural n > 0 followed by n non-empty words. Each
word is formed exclusively by lowercase letters. 
The output prints, for every word with length equal or longer to the average
one, the lowercase letter with most occurrences inside the word.*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2); 
    int x;
    cin >> x;
    vector <string> arr(x);
    double sum = 0;
    for (int i = 0; i < x; ++i) { // fill the vector and do the average
        cin >> arr[i];
        sum += arr[i].length();
    }
    double average = sum/x;
    cout << average << endl;
    
    for (int i = 0; i < x; ++i) { // does the second part of the program
        vector <int> abc(int ('z' - 'a' + 1), 0);
        if (arr[i].length() >= average) {
            cout << arr[i] << ": ";
            int copy = arr[i].length();
            for (int j = 0; j < copy; ++j) {        
                int letter = arr[i][j] - 'a';
                ++abc[letter];
            }
            int abc_size = abc.size(); // vector of reference
            int max = 0; // contains the postion of the maximum word`
            for (int j = 0; j < abc_size; ++j) { // prints the mos frequent letter
                if (abc[max] < abc[j]) max = j;
            }
            char maximum = char('a' + max);
            cout << maximum << endl;
        }
    }
}
