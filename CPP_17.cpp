#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> parse_music(std::string music_string) {
    // Existing implementation remains the same
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), std::vector<int>{2, 1, 2, 1, 1, 2, 1, 2}));
    return 0;
}