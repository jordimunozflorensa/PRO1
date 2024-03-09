#include <iostream>
using namespace std;

int main () {
    
    int n;
    cin >> n;
    if (n == 0) cout << n << endl;
    
    else {
        while (n != 0) {
        int res = n%16;
        if (res < 10) cout << res;
        else cout << char (res - 10 + 'A');
        n = n/16;
        }    
    cout << endl;
    }
}
