#include <iostream>
using namespace std;

int main() { 
    
    int x, y;
    bool final = true;
    
    while (cin >> x >> y) {
        int c = 9;
        if (not final) cout << endl; 
        for (int i = 0; i < x; ++i) {
          
            for (int j = 0; j < y; ++j) {                
                if (c < 0) c = 9;
                cout << c;
                --c; 
            }
            cout << endl;    
        }
        final = false;
    }
}
