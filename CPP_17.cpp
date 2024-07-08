#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> result;
    for (int i = 0; i < music_string.length(); i++) {
        if (music_string[i] == 'o') {
            result.push_back(4);
        } else if (music_string[i] == '|') {
            if (i + 1 < music_string.length() && music_string[i+1] == '.') {
                result.push_back(1);
                i++;
            } else {
                result.push_back(2);
            }
        }
    }
    return result;
}

int main() {
    string music = "o o| .| o| o| .| .| .| .| o o";
    vector<int> parsedMusic = parse_music(music);
    for (int beat : parsedMusic) {
        cout << beat << " ";
    }
    return 0;
}