/*Write a program that for every given n prints an “octagon of size n” according to the pattern shown in the examples.
Input consists in several natural numbers n ≥ 2.
The output prints for every n an “octagon of size n” using capital exes. Do not print any space to the right of the exes. Print an empty line after each octagon.
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        
        int size = 3*n - 2;
        int half = 2*n - 1;
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                if(i < (n-1)){
                    if(j < (n-1)){
                        if((i+j) >= n-1) cout << 'X';
                        else cout << ' ';
                    }
                    else if(j >= (n-1) and j < half) cout << 'X';
                    else if((j-i) < (n*2-1)) cout << 'X';
                }
                else if(i >= (n-1) and i < half) cout << 'X';
                else{
                    if(j < (n-1)){
                        if((i-j) < (n*2-1)) cout << 'X';
                        else cout << ' ';
                    }
                    else if(j >= (n-1) and j < half) cout << 'X';
                    else if((i+j) < (5*n-4)) cout << 'X';
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}
