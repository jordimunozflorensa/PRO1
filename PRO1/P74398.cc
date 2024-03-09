#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 2; i <= 16; ++i) {
        int sum = 0;
        int x = n; // la x pren el valor de n perquè sigui canviant
        while (x != 0) {
            x = x/i;
            ++sum;
        }
        cout << "Base " << i << ": " << sum << " cifras." << endl;
    }
    
}
