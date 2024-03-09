#include <iostream>
using namespace std;

struct Clock {
    int h; // 0 <= h < 24
    int m; // 0 <= m < 60 
    int s; // 0 <= s < 60
};

// void read(Clock &T) {
//     cin >> T.h >> T.m >> T.s;
// }

Clock midnight() {
    Clock initialized;
    initialized.h = initialized.m = initialized.s = 0;
    return initialized;
}

void increase(Clock &r) {
    ++r.s;
    if (r.s == 60) {
        r.s = 0;
        ++r.m;
    }
    if (r.m == 60) {
        r.m = 0;
        ++r.h;
    }
    if (r.h == 24) r.h = 0;
}

void print(const Clock &r) {
    if (r.h < 10) cout << 0 << r.h << ':';
    else cout << r.h << ':';
    if (r.m < 10) cout << 0 << r.m << ':';
    else cout << r.m << ':';
    if (r.s < 10) cout << 0 << r.s << endl;
    else cout << r.s << endl;
}
// int main() {
//     Clock Time;
//     read(Time);
//     increase(Time);
//     print(Time); 
//     Clock nigth = midnigth();
//     cout << 0 << nigth.h << ':' << 0 << nigth.m << ':' << 0 << nigth.s << endl;
// }
