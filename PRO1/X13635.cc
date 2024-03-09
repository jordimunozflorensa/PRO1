#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Track {
    string artist, title, genre;
    int year;
};

bool comp(const Track &a, const Track &b) {
    if (a.artist == b.artist) {
        if (a.year == b.year) {
            return a.title < b.title;
        }
        return a.year < b.year;
    }
    return a.artist < b.artist;
}

vector<Track> read_tracks(int n) {
    vector<Track> total(n);
    Track T;
    for (int i = 0; i < n; ++i) {
        cin >> T.artist >> T.title >> T.genre >> T.year;
        total[i] = T;
    }
    return total;
}

void print_track(const Track &t) {
    cout << t.artist;
    cout << " (" << t.year;
    cout << ") " << t.title << " (" << t.genre << ")" << endl;
}

int main() {
    int n_tracks;
    cin >> n_tracks;
    vector<Track> v_tracks(n_tracks);
    v_tracks = read_tracks(n_tracks);
    
    sort(v_tracks.begin(), v_tracks.end(), &comp);
    
    string genre;
    while (cin >> genre) {
        for (int i = 0; i < n_tracks; ++i) {
            if (genre == v_tracks[i].genre) print_track(v_tracks[i]);
        }
    }
}
