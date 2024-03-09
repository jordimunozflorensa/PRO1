#include <iostream>
using namespace std;

int main () {
    int n, x; 
    cin >> n;
    x = n;   
    int res = 0;
    while (n != 0) {
        res += n%10;
        n = n/100;
    }
    if (res % 2 == 0) cout << x << " IS COOL" << endl;
    else cout << x << " IS NOT COOL" << endl;
}
