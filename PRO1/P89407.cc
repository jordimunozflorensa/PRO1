#include <iostream>
#include <vector>
using namespace std;

bool analize_vector (const vector<int>& arr, int i) {
    for (int j = 0; j < i; ++j) {
        if (arr[j] != 0) return false;
    }
    return true;
}
void print_number (int n, int i) {
    if (n < i) {
        if (n < 10) cout << n;
        else cout << char('A' + n - 10);
    }
    else {
        print_number(n/i,i);
        int aux = n%i;
        if (aux < 10) cout << aux;
        else cout << char('A' + aux - 10);
    }
}
void Stable_products(int x, int y) {
    cout << "solutions for " << x << " and " << y << endl;
    int product = x*y;
    bool found = false;
    for (int i = 2; i < 17; ++ i) {
        vector<int> count(i);
        int aux_x = x;
        int aux_y = y;
        int aux_product = product;
        while (aux_product > 0) {
            if (aux_x > 0) ++count[aux_x%i];
            if (aux_y > 0) ++count[aux_y%i];
            --count[aux_product%i];
            aux_x /= i;
            aux_y /= i;
            aux_product /= i;
        }
        if (analize_vector(count,i)) {
            found = true;
            print_number(x, i);
            cout << " * ";
            print_number(y, i);
            cout << " = ";
            print_number(product, i);
            cout << " (base " << i << ")" << endl;
        }
    }
    if (not found) cout << "none of them" << endl;
}

int main() {
    int x, y;
    while (cin >> x >> y) {
        Stable_products(x,y);
        cout << endl;
    }
}
