#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> parse_music(string music_string){
    vector<int> beats;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o' && i+1 < music_string.size() && music_string[i + 1] == '|') {
            beats.push_back(2);
            i += 3;
        } else if (music_string[i] == '.' && i+1 < music_string.size() && music_string[i + 1] == '|') {
            beats.push_back(1);
            i += 3;
        } else {
            beats.push_back(4);
            i += 2;
        }
    }
    return beats;
}