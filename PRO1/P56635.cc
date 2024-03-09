#include <iostream>
using namespace std;

struct Rectangle {
    int x_left, x_right, y_down, y_up;
};

void read(Rectangle& r) {
    cin >> r.x_left >> r.x_right >> r.y_down >> r.y_up;
}

int relationship(const Rectangle& r1, const Rectangle& r2) {
    int ret;
    if (r2.x_left == r1.x_left and r2.x_right == r1.x_right and r2.y_down == r1.y_down and r2.y_up == r1.y_up) ret = 4;
    else if (r1.x_left >= r2.x_left and r1.x_right <= r2.x_right and r1.y_down >= r2.y_down and r1.y_up <= r2.y_up) ret = 1;
    else if (r2.x_left >= r1.x_left and r2.x_right <= r1.x_right and r2.y_down >= r1.y_down and r2.y_up <= r1.y_up) ret = 2;
    else if (r2.x_left > r1.x_right or r2.x_right < r1.x_left or r2.y_down > r1.y_up or r2.y_up < r1.y_down) ret = 0;
    else ret = 3;
    return ret;
}

int main() {
    Rectangle r1, r2;
    int n_rectangle_pairs;
    cin >> n_rectangle_pairs;
    
    for (int i = 0; i < n_rectangle_pairs; ++i) {
        read(r1);
        read(r2);
        if (relationship(r1, r2) == 0) cout << "rectangles do not intersect" << endl;
        if (relationship(r1, r2) == 1) cout << "the first rectangle is inside the second one" << endl;
        if (relationship(r1, r2) == 2) cout << "the second rectangle is inside the first one" << endl; 
        if (relationship(r1, r2) == 3) cout << "rectangles intersect" << endl; 
        if (relationship(r1, r2) == 4) cout << "rectangles are identical" << endl;
    }
}
