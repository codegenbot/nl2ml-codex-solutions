vector<int> parse_music(string music_string) {
    vector<int> beats;
    int length = music_string.size();
    for (int i = 0; i < length; ++i) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|' && music_string[i - 1] == 'o') {
            beats[beats.size() - 1] = 2;
        } else if (music_string[i] == '|' && music_string[i - 1] == '.') {
            beats[beats.size() - 1] = 1;
        }
    }
    return beats;
}