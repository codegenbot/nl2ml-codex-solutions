#include <iostream>
#include <vector>
#include <cassert>

vector<int> parse_music(string music_string);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}