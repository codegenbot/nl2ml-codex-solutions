vector<int> beats;
    int i = 0;
    while (i < music_string.length()) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == 'o' && music_string[i + 1] == '|') {
            beats.push_back(2);
            i++;
        } else if (music_string[i] == '.' && music_string[i + 1] == '|') {
            beats.push_back(1);
            i++;
        }
        i++;
    }
    return beats;
}