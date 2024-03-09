// Write a program that reads two 4 numbers beeing the two fist the cords x and
// y of the first point and the nxt two numbers the cords cx and y of the 
// second point and calculates the euclidian distance between these thow points.
#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

// Pre: the four numbers are inside the real numbers.
// Post: fills the struct with those numbers.
void read(Point &distance) {
    cin >> distance.x >> distance.y;
}

// Computes the euclidian distance of two points.
// Pre: the four numbers are inside the real numbers.
// Post: the distance is a real number.
double dist(const Point &a, const Point &b) {
    return sqrt((a.x - b.x) * (a.x -b.x) + (a.y - b.y) * (a.y - b.y));
}

// int main() {
//     Point a, b;
//     read(a);
//     read(b);
//     cout << dist(a, b) << endl;
// }
