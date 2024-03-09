#include <iostream>
using namespace std;

int main () {
    int a, b, c, d, min, max;
    cin >> a >> b >> c >> d;
    
    if (a < c) min = c;
    else min = a;
    
    if (b < d) max = b;
    else max = d;
    
    if (a==c and b==d) cout << "= , [" << a << "," << b << "]" << endl;
    else if (a >= c and b <= d) cout << "1 , [" << a << "," << b << "]" << endl;
    else if (c >= a and d <= b) cout << "2 , [" << c << "," << d << "]" <<endl;
    else if (a > d or c > b) cout << "? , []" << endl;
    else if (max > min) cout << "? , [" << min << "," << max << "]" << endl;
    else cout << "? , [" << max << "," << min << "]" << endl;
}
