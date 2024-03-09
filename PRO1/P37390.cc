#include <iostream>
#include <vector>
using namespace std;
typedef vector< vector<int> > Matrix;
/*
//Precondition: reads two numbers that tell the size of a Mtarix.
//Postcondition: returns a Matrix.
Matrix read_data() {
    int x;
    cin >> x;
    Matrix data(x, vector<int> (x));
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < x; ++j) {
            cin >> data[i][j];
        }
    }
    return data;
}*/

Matrix product(const Matrix& a, const Matrix& b) {
    int size = a.size();
    Matrix C (size, vector<int> (size, 0));
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            for (int k = 0; k < size; ++k) C[i][j] += a[i][k] * b[k][j];
        }
    }
    return C;
}
/*
void print_data(const Matrix& a) {
    int size = a.size();
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << ' ' << a[i][j];
        }
        cout << endl;
    }
    cout << endl;
}*/
/*
int main() {
    Matrix M1 = read_data();
    Matrix M2 = read_data();
    Matrix M3 = product(M1, M2);
    print_data(M3);
} */
