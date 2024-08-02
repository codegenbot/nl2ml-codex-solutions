bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    int count = 0;
    for (char note : music_string) {
        if (note == 'o') {
            beats.push_back(4);
        } else if (note == '|') {
            beats.push_back(count);
            count = 0;
        } else if (note == '.') {
            count++;
        }
    }
    if (count > 0) {
        beats.push_back(count);
    }
    return beats;
}

int main(){
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}