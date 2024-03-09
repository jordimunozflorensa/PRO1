#include <iostream>
using namespace std;

string compara(int d1, int m1, int a1, int d2, int m2, int a2) {
    string data;
    if (a1 > a2) data = "posterior";
    else if (a1 < a2) data = "anterior";
    else {
        if (m1 > m2) data = "posterior";
        else if (m1 < m2) data = "anterior";
        else {
            if (d1 > d2) data = "posterior";
            else if (d1 < d2) data = "anterior";
            else data = "iguals";
        }
    }
    return data;
}
int main() {
    int d1, m1, a1, d2, m2, a2;
    char character;
    while (cin >> d1 >> character >> m1 >> character >> a1 and cin >> d2 >> character >> m2 >> character >> a2) {   
        string s = compara(d1, m1, a1, d2, m2, a2);
        cout << s << endl;
    }
}
