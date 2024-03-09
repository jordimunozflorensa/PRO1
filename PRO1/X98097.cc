#include <iostream>
using namespace std;

int main() {
    int n, odd = 0, even = 0, num = 1;
    cin >> n;
    int k = n;
    while (n / 10 != 0) {
        if (num % 2 == 0) even += n%10;
        else odd += n%10;
        n /= 10;
        ++num;
    }
    if (num%2 == 0) even += n;
    else odd += n;
    if (k < 10) { 
        cout << k << " " << "0" << endl;
        cout << "0 = 0 * " << k << endl; 
    }
    else if (k == 10) {
        cout << "0 " << "1" << endl;
        cout << "0 = 0 * 1" << endl;
    }
    else {
        cout << odd << " " << even << endl;
        if (even == 0) cout << "0 = 0 * " << odd << endl; 
        else if (odd == 0) cout << "0 = 0 * " << even << endl;
        else {
            if (even%odd == 0) cout << even << " = " << even/odd << " * " 
                << odd << endl;
            else if (odd%even == 0) cout << odd << " = " << odd/even << " * " 
                << even << endl;
            else cout << "nothing" << endl;
        }
    }
}
