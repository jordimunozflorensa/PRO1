#include <iostream>
using namespace std;

int main() {
    int x, y;
    
    while (cin >> x >> y) {
        int sum = 0;
        for (int i = x; i <= y; ++i) {
            sum += (i*i*i);
                       
    }
    
        cout << "suma dels cubs entre " << x << " i " << y << ": " << sum << endl;
    }
}
