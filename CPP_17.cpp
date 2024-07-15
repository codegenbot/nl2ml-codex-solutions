vector<int> parse_music(string music_string){
    vector<int> beats;
    int note_duration = 0;
    for (char note : music_string) {
        if (note == 'o') {
            note_duration = 4;
        } else if (note == '|') {
            beats.push_back(note_duration);
            note_duration = 0;
        } else if (note == '.') {
            note_duration = 1;
        }
    }
    if (note_duration != 0) {
        beats.push_back(note_duration);
    }
    return beats;
}