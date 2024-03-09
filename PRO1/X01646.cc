#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x;
    
    while (cin >> y) { 
        int z = y;
        int sum = 0;
        
        while (z > 0) {
            sum += z%x;
            z = z/x;
        }
    cout << y << ": " << sum << endl;      
    }
    
}
