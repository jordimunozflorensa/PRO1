#include <iostream>
#include <vector>
using namespace std;

struct Point {
	double x, y;
};
bool prop1(const vector <Point>&v) {
	int count = 0;
	for (int i = 0; i < v.size()-1; ++i) {
		if (v[i].x != v[i+1].x or v[i].y != v[i+1].y) ++count;
	}
	if (count > 1) return true;
	else return false;
}
bool prop2(const vector <Point>&v) {
	Point p;
	p.x = 0;
	p.y = 0;
	for (int i = 0; i < v.size(); ++i) {
		p.x = p.x+v[i].x;
		p.y = p.y+v[i].y;
	}
	if (p.x == p.y) return true;
	else return false;
}
bool barycenter(const vector <Point>& v, Point& b) {
	int n = v.size();
	for (int i = 0; i < n; ++i) {
		if (v[i].x == b.x and v[i].y == b.y) return false;
	}
	return true;
}
int main() {
	cout.setf(ios::fixed);
	cout.precision(2);
	int n;
	while (cin >> n) {
		vector <Point>v(n);
		Point b;
		b.x = 0;
		b.y = 0;
		for (int i = 0; i < n; ++i) {
			cin >> v[i].x >> v[i].y;
			b.x = b.x+v[i].x;
			b.y = b.y+v[i].y;
		}
		Point bar;
		bar.x = b.x / n;
		bar.y = b.y / n;
		cout << "barycenter: (" << bar.x << "," << bar.y << ")" << endl;
		if (not prop1(v)) cout << "property 1 does not hold" << endl;
		else {
			if (not prop2(v)) cout << "property 2 does not hold" << endl;
			else {
				if (not barycenter(v, bar)) cout << "property 3 does not hold" << endl;
				else {
					cout << "normalized vector" << endl;
				}
			}
		}
	}
}
