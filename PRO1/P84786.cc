#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

struct Circle {
    Point center;
    double radius;
};

double dist(const Point &a, const Point &b) {
    return sqrt((a.x - b.x) * (a.x -b.x) + (a.y - b.y) * (a.y - b.y));
}

void move(Point& p1, const Point& p2) {
    p1.x += p2.x;
    p1.y += p2.y;
}

void scale(Circle& c, double sca) {
    c.radius *= sca;
}

void move(Circle& c, const Point& p) {
    move(c.center, p);
}

bool is_inside(const Point& p, const Circle& c) {
    return (dist(p, c.center) < c.radius);
}
