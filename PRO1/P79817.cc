#include <iostream>
using namespace std;

int main() {
    int x, y;
        
    while (cin >> x >> y) {
        
        int sum = 1;        
        for (int n = 1; n <= y; ++n) {       
            sum *= x;
        }    
        cout << sum << endl;
    }
}

