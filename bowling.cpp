int score(string s) {
    int total = 0;
    int frame = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'X') {
            total += 10;
            total += (s[i+2] == 'X') ? 10 : (isdigit(s[i+1]) ? s[i+1]-'0' : 10-s[i+1]+'0');
            total += (isdigit(s[i+1]) && s[i+2] == '/') ? s[i+2]-'0' : 0;
            frame++;
        } else if(isdigit(s[i])) {
            total += s[i]-'0';
            if(s[i+1] == '/') {
                total += 10-s[i]-'0';
            } else if(isdigit(s[i+1])) {
                total += s[i+1]-'0';
            }
            frame++;
        } else if(s[i] == '/') {
            total += 10-s[i-1]+'0';
            total += (isdigit(s[i+1])) ? s[i+1]-'0' : 10-s[i+1]+'0';
            frame++;
        }
        if(frame == 10) break;
    }
    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}