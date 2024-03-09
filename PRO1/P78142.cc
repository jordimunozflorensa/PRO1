#include <iostream>
using namespace std;

int main () {
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    double x, total = 0.0;
    int compt = 0;
    
    while (cin >> x){
        total += x;
        ++compt;
    } 
    cout << total/compt << endl;
}
            
