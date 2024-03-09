#include <iostream>
using namespace std;

int main () {
    
    char x, y, w;
    cin >> x >> y;
    
    if ((x == 'A' and y == 'P') or (x == 'P' and y == 'V') or (x == 'V' and y == 'A')) w = '1';
    else if (x == y) w = '-';
    else w = '2';
    
    cout << w << endl;
}    
