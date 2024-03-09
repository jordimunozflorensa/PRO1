/* Write a program that gives the reslt of the product of two matrices*/
#include <vector>
#include <iostream>
using namespace std;
typedef vector< vector<int> > Matrix;

//Precondition: reads two matrices such us the first matrice has the same
//number of colummns than the number of rows of the second matrice.
//Post: returns the product of the two matrices.
Matrix product(const Matrix& A, const Matrix& B) {
    int rows_a = A.size();
    int columns_a = A[0].size();
    int columns_b = B[0].size();
    Matrix C (rows_a, vector<int> (columns_b, 0));
    for (int i = 0; i < rows_a; ++i) {
        for (int j = 0; j < columns_b; ++j) {
            for (int k = 0; k < columns_a; ++k) C[i][j] += A[i][k] * B[k][j];
        }
    }
    return C;
}
/*
int main ()
{
    int p, q, r;
    while (cin >> p >> q >> r) {
        Matrix A(p,vector<int>(q));
        Matrix B(q,vector<int>(r));
        for (int i=0; i<p; ++i) {
            for (int j=0; j<q; ++j) {
                cin >> A[i][j];
        }   }
        for (int i=0; i<q; ++i) {
            for (int j=0; j<r; ++j) {
                cin >> B[i][j];
        }   }
        Matrix C = product(A,B);
        for (int i=0; i<p; ++i) {
            for (int j=0; j<r; ++j) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}
*/
