#include <iostream>
using namespace std;

bool is_valid_date(int d, int m, int y) {
    bool leap_year, correct;
    correct = false;
    
    if (y%4 != 0 or (y%100 == 0 and y%400 != 0)) leap_year = false;
    // if ((y%4 == 0 and y%100 != 0) or (y%100 == 0 and (y/100 % 4) == 0)) leap_year = true; 
    else leap_year = true;
    
    if (y < 1800 or y > 9999) correct = true;
    if (m <= 0 or m > 12) correct = true;
    
    if ((m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12) and (0 < d and d <= 31)) correct = false;
    else if (m == 2) {
        if (leap_year and (d <= 0 or d > 29)) correct = true;
        if (not leap_year and ( d <= 0 or d > 28)) correct = true;
    }
    else if (d <= 0 or d > 30) correct = true;
    return not correct;
}

int main() {
    int d, m, y;
    while (cin >> d >> m >> y) {
        cout << (is_valid_date(d, m, y) ? "true" : "false") << endl;
    }
}
