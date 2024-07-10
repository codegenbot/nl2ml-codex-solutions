#include <iostream>
#include <vector>
#include <cassert>

vector<int> parse_music(string music_string);

vector<int> parse_music(string music_string){
    vector<int> result;
    int beats = 0;
    for (char c : music_string) {
        if (c == 'o') {
            beats = 4;
        } else if (c == '|') {
            result.push_back(beats);
            beats = 0;
        } else if (c == '.') {
            beats = 1;
        }
    }
    if (beats > 0) {
        result.push_back(beats);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

bool issame(vector<int> a, vector<int> b);

int main() {
    using namespace std;
    
    string music_string;
    cin >> music_string;

    vector<int> notes = parse_music(music_string);
    vector<int> reference = {1, 2, 3, 4};

    assert(notes == reference);

    if(issame(notes, reference)) {
        cout << "Music is correct" << endl;
    } else {
        cout << "Music is incorrect" << endl;
    }

    return 0;
}