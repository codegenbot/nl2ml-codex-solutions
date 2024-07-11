bool issame(vector<int> b){
    return (b[0] == b[1]);
}

vector<int> parse_music(string music_string);

int main() {
    string music_string;
    cin >> music_string;
    vector<int> beats = parse_music(music_string);
    for (int beat : beats) {
        cout << beat << " ";
    }
    return 0;
}

vector<int> parse_music(string music_string){ 
    vector<int> beats;
    string note = "";
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
    return beats;
}