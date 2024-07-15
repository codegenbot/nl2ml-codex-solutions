vector<int> parse_music(string music_string);

vector<int> parse_music(string music_string){
    vector<int> beats;
    string note;
    for (char c : music_string) {
        if (c == 'o') {
            if (note == "o|") {
                beats.push_back(2);
            } else if (note == ".|") {
                beats.push_back(1);
            } else {
                beats.push_back(4);
            }
            note = "";
        } else {
            note += c;
        }
    }
    if (!note.empty()) {
        if (note == "o|") {
            beats.push_back(2);
        } else {
            beats.push_back(1);
        }
    }
    return beats;
}

bool issame(vector<int> a, vector<int> b);