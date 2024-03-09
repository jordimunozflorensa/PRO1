#include <iostream>
#include <cmath>
using namespace std;

double sine(double n) {
    n = n * M_PI / 180;
    return sin(n);
}
double cosine(double n) {
    n = n * M_PI / 180;
    return cos(n);
}
int main() {
    cout.setf(ios::fixed);
    cout.precision(6);
    
    double x;
    while (cin >> x) cout << sine(x) << " " << cosine(x) << endl;
}
