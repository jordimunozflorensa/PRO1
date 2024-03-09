#include <iostream>
#include <vector>
using namespace std;

void peaks(const vector<int>& mountains) {
    vector<int> peaks;
    int size_mountains = mountains.size() - 1;
    for (int i = 1; i < size_mountains; ++i) {
        if ((mountains[i] > mountains[i - 1]) and (mountains[i] > mountains[i + 1])) {
            peaks.push_back(mountains[i]);
        }
    }
    int size_peaks = peaks.size();
    cout << size_peaks << ":";
    for (int i = 0; i < size_peaks; ++ i) {
        cout << " " << peaks[i];
    }
    cout << endl;
    bool found = false;
    bool start = false;
    for (int i = 0; i < size_peaks; ++i) {
        if (peaks[i] > peaks[size_peaks - 1]) {
            if (start) cout << " ";
            cout << peaks[i];
            found = true;
            start = true;
        }
    }
    if (not found) cout << "-";
    cout << endl;
}
int main() {
    int x;
    cin >> x;
    vector<int> mountains(x);
    for (int i = 0; i < x; ++i) {
        cin >> mountains[i];
    }
    peaks(mountains);
}
