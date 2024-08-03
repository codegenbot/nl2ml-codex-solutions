#include <vector> // Add this include directive

namespace problem_17 {
    std::vector<int> parse_music(std::string music_string) {
        std::vector<int> beats;
        int i = 0;
        while (i < music_string.size()) {
            if (music_string[i] == 'o') {
                beats.push_back(4);
                i++;
            } else if (music_string[i] == 'o' && music_string[i + 1] == '|') {
                beats.push_back(2);
                i += 2;
            } else if (music_string[i] == '.' && music_string[i + 1] == '|') {
                beats.push_back(1);
                i += 2;
            } else if (music_string[i] == '|') {
                i++;
            }
        }
        return beats;
    }

    bool issame(std::vector<int> a, std::vector<int> b) {
        return a == b;
    }
}