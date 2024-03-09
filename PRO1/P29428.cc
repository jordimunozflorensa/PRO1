/* Your task is to write a program that reads a sequence of words and prints,
for each word, all the other words of the sequence contained in it.
* Input consists in a natural number n followed by n different words p1,…,pn.
* The program prints a line for each p1,…,pn in this order. Each line 
starts with pi, followed by the symbol “:” and the list of all the input words
contained in pi, in the same order than the input. */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Precondition: reads a number and a sequence of words
// Postcondition: gives a vector of the number size and filled with the words
vector<string> read_data () {
    int size;
    cin >> size;
    vector<string> data(size);
    for (int i = 0; i < size; ++i) {
        cin >> data[i];
    }
    return data;
}
// Precondition: reads two words
// Postcondition: says if the word2 is inside the word1 or not
bool contains (string word1, string word2) {
    int i = 0;
    int size2 = word2.length();
    int size1 = word1.length();
    while (i + size2 <= size1) {
        int j = 0;
        bool is_inside = true;
        while (is_inside and j < size2) {
            is_inside = (word2[j] == word1[i + j]);
            ++j;
        }
        if (is_inside) return true;
        else ++i;        
    }
    return false;
}
//Precondition: reads a vector filled of words
//Postcondition: prints the word that is compared and the words of the vector
//that are inside of it.
void words_inside (const vector<string>& arr) {
    int size = arr.size();
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << ":";
        for (int j = 0; j < size; ++j) {
            if (contains(arr[i], arr[j])) cout << " " << arr[j];
        }
        cout << endl;
    }
    
}

int main() {
    vector<string> arr = read_data();
    words_inside(arr);
}
