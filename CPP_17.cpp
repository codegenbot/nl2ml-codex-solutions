vector<int> parse_music(string music_string){ 
    vector<int> beats;
    string note;
    for (char ch : music_string) {
        if (ch == ' ') {
            if (note == "o") beats.push_back(4);
            else if (note == "o|") beats.push_back(2);
            else if (note == ".|") beats.push_back(1);
            note.clear();
        } else {
            note += ch;
        }
    }
    if (!note.empty()) {
        if (note == "o") beats.push_back(4);
        else if (note == "o|") beats.push_back(2);
        else if (note == ".|") beats.push_back(1);
    }
    return beats;
}