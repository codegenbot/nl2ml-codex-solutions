vector<int> parse_music(string music_string){
    vector<int> beats;
    int beat = 0;
    for (char note : music_string) {
        if (note == 'o') {
            beat = 4;
        } else if (note == '|') {
            beats.push_back(beat);
            beat = 0;
        } else if (note == '.') {
            beat = 1;
        }
    }
    beats.push_back(beat);
    return beats;
}