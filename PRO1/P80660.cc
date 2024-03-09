//Let n be any strictly positive natural number. Consider the                  following process. If n is an even number, we divide it by two. Otherwise, we multiply it by 3 and add 1 to it. When we reach 1, we stop. For instance, starting with 3, we obtain the sequence: 3,  10,  5,  16,  8,  4,  2,  1 .
#include <iostream>
using namespace std;

int main () {
    int x; // Input consists of several natural numbers n ≥ 1.
     
    while (cin >> x) {
        int sum = 0; // Number of steps
        
        while (x != 1) {
            if (x%2 == 0) x /= 2;
            else x = (x*3) + 1;
            ++sum;
        }
        cout << sum << endl; 
    }
}
