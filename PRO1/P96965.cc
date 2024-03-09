#include <iostream>
using namespace std;

int sum_of_digits(int x){
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
int reduction_of_digits(int x){
    int k = sum_of_digits(x);
    if (k / 10 != 0) return reduction_of_digits(k);
    else return k;
}

int main() {
  int n;
  while (cin >> n) {
    cout << reduction_of_digits(n) << endl;
    }
}
