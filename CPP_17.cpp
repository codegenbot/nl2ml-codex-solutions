vector<int> beats;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
            i += 2;
        } else if (music_string[i] == '.' && music_string[i+1] == '|') {
            beats.push_back(1);
            i += 2;
        } else {
            beats.push_back(2);
            i += 3;
        }
    }
    return beats;
}