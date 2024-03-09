#include <iostream>
using namespace std;

int main() {
   
    double n, x;
    cin >> n;
    double sum1 = 0; // guarda el valor del primer sumatori
    double sum2 = 0; // guarda el valor del segon sumatori
    
    for (int i = 0; i < n; ++i) { 
        cin >> x;
        sum1 += x*x; // valor primer sumatori
        sum2 += x; // valor segon sumatori
    }
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << ((1/(n-1)) * sum1) - ((1/(n*(n-1)) * sum2 * sum2)) << endl; // variança 
}
