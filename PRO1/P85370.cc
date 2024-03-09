#include <iostream>
using namespace std;

int main() {
    
    cout.setf(ios::fixed);
    cout.precision(4);
    
    double capital, interest;
    int years;
    string kind;
    cin >> capital >> interest >> years >> kind;
    
    if (kind == "simple") {
        cout << capital + capital*(interest/100)*years << endl;
    }
    else {
        for (int y = 0; y < years; ++y) {
            capital = capital + capital*(interest/100);
        }
        cout << capital << endl;
    }
}
    
