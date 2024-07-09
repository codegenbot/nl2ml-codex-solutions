#include <vector>
#include <string>
using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> result;
    for (int i = 0; i < music_string.length(); i++) {
        if (music_string[i] == 'o') {
            result.push_back(4);
        } else if (music_string[i] == '|') {
            if (i > 0 && music_string[i-1] == '.') {
                result.push_back(2);
            } else {
                result.push_back(3);
            }
        }
    }
    return result;
}