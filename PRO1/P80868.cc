#include <iostream>
using namespace std;

// Calculates the digits of a number.
// Pre: a natural number.
// Post: a natural number.
int nombre_digits(int n) {
    if (n < 10) return 1;
    else return 1 + nombre_digits(n/10);
}

int main() {
    int aux, rows;
    cin >> aux >> rows;
    int n_digits = nombre_digits(aux);
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (j != 0) cout << '-';
            cout << aux;
        }
        cout << '.';
        for (int j = 0; j < 2*(rows - i - 1); ++j)
            for (int k = 0; k < n_digits + 1; ++k) cout << '.';
        for (int j = 0; j <= i; ++j) {
            if (j != 0) cout << '-';
            cout << aux;            
        }
        cout << endl;
    }
}
