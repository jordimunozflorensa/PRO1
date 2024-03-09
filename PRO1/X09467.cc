#include <iostream>
#include <vector>
using namespace std;

vector<int> read_data(int size) {
    vector <int> v (size);
    for (int i = 0; i < size; ++i) {
        cin >> v[i];
    }
    return v;
}

vector<bool> ramps_pos(const vector <int>& V) {
    int vec_size = V.size();
    vector<bool> ramps(vec_size, 0);
    for (int i = 0; i < vec_size - 2; ++i) {
        if ((V[i] > V[i + 1] and V[i + 1] > V[i + 2]) or (V[i] < V[i + 1] and V[i + 1] < V[i + 2])) ramps[i] = true; 
    }
    return ramps;
}

int pot_conflictive(const vector <bool>& B) {
    int conflictive = 0;
    int vect_size = B.size();
    for (int i = 0; i < vect_size; ++i) {
        if (B[i] and B[i + 1]) ++conflictive;
        if (B[i] and B[i + 2]) ++conflictive;
    }
    return conflictive;
}

void result (const vector <bool>& B, int pot_confl) {
    int size = B.size();
    cout << "positions with a ramp:";
    for (int i = 0; i < size; ++i) {
        if (B[i]) cout << " " << i;
    }
    cout << endl;
    cout << "potentially conflictive: " << pot_confl << endl;;
    cout << "---" << endl;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> data = read_data(n);
        vector<bool> postion_with_ramp = ramps_pos(data);
        int pot_confl = pot_conflictive(postion_with_ramp);
        result(postion_with_ramp, pot_confl);
    }
}
