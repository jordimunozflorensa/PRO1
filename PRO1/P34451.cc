#include <iostream>
using namespace std;

int main() {
    int x, n;
    cin >> x;
    int sum = 0;
    
    while (cin >> n) {
        if (n%x == 0) ++sum;
    }
    cout << sum << endl;
}
    
    
    
