#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Punt {
    int x, y;
};

// Calculates the distance of a point.
// Pre: recives a point with the difference between the reference point and a that point.
// Post: returns the sum of its two coordenates.
int dist(const Punt& p) {
    if (p.x > 0) {
        if (p.y > 0) return p.x + p.y;
        else return p.x - p.y;
    }
    else {
        if (p.y > 0) return p.y - p.x;
        else return -p.y - p.x;
    }        
}

// Says the sorting critery
// Pre: recives two points.
// Post: -
bool comp(const Punt& p1, const Punt& p2) {
    int d1 = dist(p1);
    int d2 = dist(p2);
    if (d1 != d2) return d1 < d2;
    if (p1.x != p2.x) return p1.x < p2.x;
    return p1.y < p2.y;
}

// Prints the points at difference distances
// Pre: recives a vector of points the size of the vctor and the coordenate x and y of a reference vector.
// Post: -
void print_points (const vector<Punt> &v, int n, int x, int y) {
    int d_pre = -1;
    for (int i = 0; i < n; ++i) {
        int d = dist(v[i]);
        if (d > d_pre) {
            cout << "points at distance " << d << endl;
            d_pre = d;
        }
        cout << v[i].x + x << ' ' << v[i].y + y << endl;
    }
}

int main() {
    int x, y, n, px, py;
    cin >> x >> y >> n;
    vector<Punt> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> px >> py;
        v[i].x = px - x;
        v[i].y = py - y;
    }

    sort(v.begin(),v.end(),comp);
    
    print_points(v, n, x, y);
}
