/* Write a function that tells if the given year is a leap year or not.
 * The parameter year is between 1800 and 9999, both included. */

#include <iostream>
using namespace std;

bool is_leap_year(int year) {
    if (year % 4 != 0 or (year % 100 == 0 and year % 400 != 0)) return false;
    else return true;
}

int main() {
    int y;
    while (cin >> y) cout << (is_leap_year(y)) << endl;
}

