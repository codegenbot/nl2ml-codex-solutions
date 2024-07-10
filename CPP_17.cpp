vector<int> parse_music(string music_string){
    vector<int> beats;
    string note = "";
    for (char c : music_string) {
        if (c == 'o') {
            if (note == "") {
                beats.push_back(4);
            } else {
                beats.push_back(2);
                note = "";
            }
        } else if (c == '.') {
            beats.push_back(1);
        } else if (c == '|') {
            note = c;
        }
    }
    return beats;
}