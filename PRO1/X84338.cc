#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 0, count = 1;
    cin >> n;
    int m = n;
    while (n/10 != 0) {
        n /= 10;
        ++count;
    }
    if (count%2 != 0) cout << "nothing" << endl;
    else {
        for (int i = 1; i <= count/2; ++i) {
            a += m%10;
            m /= 10;
        }
        for (int j = 1; j <= count/2; ++j) {
            b += m%10;
            m /= 10;
        }
        if (a == b) cout << b << " = " << a << endl;
        else if (a < b) cout << b << " > " << a << endl;
        else cout << b << " < " << a << endl;       
    }
}
//cout << b << ":" << a << ":" << m << endl;
