int calculateBowlingScore(string bowls) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    int frames[10] = {0};
    
    for(char c : bowls) {
        if(c == 'X') {
            frames[frame-1] = 10;
            frame++;
            if(frame == 11) break;
        } else if(c == '/') {
            frames[frame-1] = 10 - frames[frame-1];
            frame++;
            ball = 0;
            if(frame == 11) break;
        } else if(c == '-') {
            ball++;
        } else {
            frames[frame-1] += c - '0';
            ball++;
            if(ball == 2) {
                frame++;
                ball = 0;
                if(frame == 11) break;
            }
        }
    }
    
    for(int i = 0; i < 10; i++) {
        score += frames[i];
    }
    
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << calculateBowlingScore(bowls) << endl;
    
    return 0;
}