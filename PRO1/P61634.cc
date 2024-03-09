#include <iostream>
using namespace std;

int main (){
    int x;
    cin >> x;
    
    if (x % 4 != 0 or (x % 100 == 0 and x % 400 != 0)) {
    cout << "NO" << endl;
    }
    else cout << "YES" << endl;
}
    
