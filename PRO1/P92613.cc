#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x; 
    cin >> x;
    cout << int(x) << " ";
    cout << (x - int(x) == 0 ? int(x) : int(x) + 1) << " ";
    cout << (x >= (int(x) + 0.5) ? int(x) + 1 : int(x)) << endl;
}