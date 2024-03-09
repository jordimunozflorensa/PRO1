/* Write a program that transpose a Matrix */

#include <iostream>
#include <vector>
using namespace std;
typedef vector< vector<int> > Matrix;

// Pre: reads two natural numbers
// Post: swaps the two natural numbers
void swap(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}

// Pre:  m is a square matrix
// Post: m contains the transpose of the input matrix
void transpose(Matrix& m) {
    int n = m.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            swap(m[i][j], m[j][i]);
            
        }
    }   
}

int main () {
    int n;
    while (cin >> n) {
        vector< vector<int> > M(n, vector<int>(n));
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> M[i][j];
        }   }
        transpose(M);
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cout << M[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}
