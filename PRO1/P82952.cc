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
    else if (r2.x_left >= r1.x_right or r2.x_right <= r1.x_left or r2.y_down >= r1.y_up or r2.y_up <= r1.y_down) ret = 0;
    else ret = 3;
    return ret;
}

int main() {
    int n_rect;
    cin >> n_rect;
    while (n_rect != 0) {
        Rectangle r1, r2;
        read(r2);
        bool intersect = true;
        int i = 1;
        while (intersect and i < n_rect) {
            r1.x_left = r2.x_left;
            r1.x_right = r2.x_right;
            r1.y_down = r2.y_down;
            r1.y_up = r2.y_up; 
            read(r2);
            
            if (relationship(r1, r2) == 0) intersect = false;
            else if (relationship(r1, r2) == 1) {
                r2.x_left = r1.x_left;
                r2.x_right = r1.x_right;
                r2.y_up = r1.y_up;
                r2.y_down = r1.y_down;              
            }
            else if (relationship(r1, r2) == 3) {
                if (r1.x_left > r2.x_left) r2.x_left = r1.x_left;
                if (r1.x_right < r2.x_right) r2.x_right = r1.x_right;
                if (r1.y_down > r2.y_down) r2.y_down = r1.y_down;
                if (r1.y_up < r2.y_up) r2.y_up = r1.y_up;
            }
            ++i;
            
        }
        if (not intersect) {
            cout << "empty intersection" << endl;
            while (i < n_rect) {
                read(r2);
                ++i;
            }
        }
        else {
            cout << "bottom left point = (" << r2.x_left << ", " << r2.y_down << ");";
            cout << " top right point = (" << r2.x_right << ", " << r2.y_up << ")" << endl;
        }
        cin >> n_rect;
    }
}
