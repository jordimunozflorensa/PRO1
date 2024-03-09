#include <iostream>
#include <cmath>
using namespace std;

int main (){
    
    cout.setf(ios::fixed);
    cout.precision(6);
    
    int n;
    cin >> n;
    while (n > 0) {
        string s;
        cin >> s;
        if (s == "rectangle") {
            double x, y;
            cin >> x >> y;
            cout << x*y << endl;
        }
        else {
            double r;
            cin >> r;
            cout << r*r*M_PI << endl;
        }
    --n;
    }
}
