#include <vector>
#include <string>
#include <cassert>

vector<int> parse_music(string music_string);

bool compare_vectors(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(compare_vectors(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}

vector<int> parse_music(string music_string) {
    vector<int> beats;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] != ' ') {
            beats.push_back(1);
        }
        i++;
    }
    return beats;
}