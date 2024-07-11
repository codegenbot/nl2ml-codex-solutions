
#include <iostream>
#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> parse_music(string music_string) {
    vector<int> beats;
    string note;
    for (int i = 0; i < music_string.size(); ++i) {
        note = music_string.substr(i, 2);
        if (note == "o|") {
            beats.push_back(2);
        } else if (note == ".|") {
            beats.push_back(1);
        } else if (note == "o ") {
            beats.push_back(4);
        }
    }
    return beats;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}