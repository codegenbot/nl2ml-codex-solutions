```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            if s[i+1].isdigit():
                score += int(s[i]) + int(s[i+1])
            else:
                score += int(s[i]) * 10
        elif s[i] == 'X':
            score += 10 + 10 if frame < 9 and s[2*i+2].isdigit() else 10
            frame += 1
        else:
            if s[i+1].isdigit():
                score += 10 - int(s[i+1]) if frame < 9 and s[2*i+2].isdigit() else 10
            else:
                score += 10
        if frame == 10:
            break
    return score