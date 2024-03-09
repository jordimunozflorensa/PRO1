#include <iostream>
using namespace std;

int main (){
    int y, d, h, m, s;
    cin >> y >> d >> h >> m >> s;
    cout << (y*365*24*60*60)+(d*24*60*60)+(h*60*60)+(m*60)+s << endl;
}
