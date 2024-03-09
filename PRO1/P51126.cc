#include <iostream>
using namespace std;

int main (){
    int a, b, c, d, min, max;
    cin >> a >> b >> c >> d;
    
    // the biggest variable is the min
    if (a < c) min=c;
    else min=a;
    
    // the smallest variable is the max
    if (b > d) max=d;
    else max=b;
    
    if (max < min) cout << "[]" << endl;
    else cout << "[" << min << "," << max << "]" << endl;
    
}
