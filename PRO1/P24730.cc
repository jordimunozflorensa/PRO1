#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Teacher {
    string name;
    int sweets;
    int carrots;
};

void read_data(Teacher &T) {
    cin >> T.name >> T.sweets >> T.carrots;
}

bool better_teacher(const Teacher &a, const Teacher &b) {
    if (a.sweets != b.sweets)
        return a.sweets > b.sweets;
    else if (a.carrots != b.carrots)
        return a.carrots > b.carrots;
    else if (a.name.length() != b.name.length())
        return a.name.length() < b.name.length();
    else return a.name < b.name;
}

void print_school(const vector<Teacher> &T) {
    int size = T.size();
    for (int j = 0; j < size; ++j)
            cout << T[j].name << endl;
    cout << endl;
}

int main() {
    int n_classes;
    cin >> n_classes;
    for (int i = 0; i < n_classes; ++i) {
        int n_teachers;
        cin >> n_teachers;
        vector <Teacher> T(n_teachers);
        
        for (int j = 0; j < n_teachers; ++j) {
            read_data(T[j]);
        }
        
        sort(T.begin(), T.end(), better_teacher);
        
        print_school(T);
    }
}
