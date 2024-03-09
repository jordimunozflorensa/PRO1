#include <iostream>
using namespace std;


bool is_palindromic(int n);

bool is_palindromic(int n) {
    int k = n;
    int count = 0;
    while (n/10 != 0) {
        count = count*10 + n%10;
        n /= 10;
    }
    count = count*10 + n;  
    
    if (count == k) return true;
    else return false;
}


int main() {
    int n;
    while (cin >> n) cout << (is_palindromic(n) ? "true" : "false") << endl;
}
