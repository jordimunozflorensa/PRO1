/*Write a function
     double dist_or(double x, double y);
which returns the distance to the origen from the point (x,y).
 * The input is formed by two reals.
*/

#include <iostream>
#include <cmath>
using namespace std;

double dist_or(double x, double y) {
    return sqrt(x*x + y*y);
}

int main () {
    double x, y;
    while (cin >> x >> y) cout << dist_or(x, y) << endl;
}
