/*  Write a program that reads a sequence of matrices of integers, and prints
 * which of them has the maximum difference between its greatest element and
 * the smallest element. In case of a tie, you must choose the matrix that
 * appeared before in the sequence.*/
#include <vector>
#include <iostream>
using namespace std;
typedef vector< vector<int> > Matrix;

// Pre: reads a matrix.
// Post: returns the maximum and the minum value of the matrix.
void min_max(const Matrix& mat, int& minimum, int& maximum){
    int f = mat.size();
    int c = mat[0].size();
    minimum = maximum = mat[0][0];
    for(int i=0; i<f; ++i){
        for(int j=0; j<c; ++j){
            if(mat[i][j] < minimum) minimum = mat[i][j];
            if(mat[i][j] > maximum) maximum = mat[i][j];
        }
    }
}
// Pre: reads two variables that say the size of a matrix.
// Post: fills the matrix with values.
void read_matrix(Matrix& m,int f,int c){
    m = Matrix(f,vector<int>(c));
    for(int i=0; i<f; ++i)
        for(int j=0; j<c; ++j)
            cin >> m[i][j];
}
// Pre: reads a matrix and uses the two previous functions.
// Post: calculates the maximum diference between two values of the same matrix
// and tells which matrix is the first with that diference.
void Control_C401B(Matrix& m){
    int f,c;
    int max,min;
    int dif = -1;
    int num_matrix = 0, first_matrix = 0;
    
    while(cin >> f >> c) {
        read_matrix(m,f,c);
        min_max(m,min,max);
        ++num_matrix;
        if(max-min > dif) {
            dif= max - min;
            first_matrix = num_matrix;
        }
    }
    cout << "la diferencia maxima es " << dif << endl;
    cout << "la primera matriu amb aquesta diferencia es la " << first_matrix << endl;
}

int main () {
    Matrix m;
    Control_C401B(m);
}
