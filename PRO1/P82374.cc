#include <iostream>
using namespace std;

int main () {
    int x, a, b, c, d;
    cin >> x >> a >> b >> c >> d;
    
    if ((x <= b and x >= a) or (x <= d and x >= c)) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
}
