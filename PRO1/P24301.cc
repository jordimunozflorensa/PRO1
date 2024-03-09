/* Write a function that returns the concatenation of v1 and v2. That is, you
 * must return a vector with the elements of v1 followed by the elements of v2.
*/
#include <iostream>
#include <vector>
using namespace std;

// Precondition: recives two vectors, with at least one element.
// Postcondition: returns the concatenation of this two vectors.
vector<int> concatenation(const vector<int> & v1, const vector<int> & v2) {
    vector<int> concat (v1.size() + v2.size());
    for (int i = 0; i < v1.size(); ++i) concat[i] = v1[i];
    for (int i = 0; i < v2.size(); ++i) concat[i + v1.size()] = v2[i];
    return concat;
}
/*
int main() {
    vector<int> v1(3);
    for (int i = 0; i < 3; ++i) {
        cin >> v1[i];
    }
    vector<int> v2(5);
    for (int i = 0; i < 5; ++i) {
        cin >> v2[i];
    }
    for (int i = 0; i < concatenation(v1, v2).size(); ++i) {
        cout << concatenation(v1, v2)[i];
    }
    cout << endl;
} */
