```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 10 + (10 - int(frames[i+1])) if frame < 9 else 25
        elif frames[i] == '/':
            score += 10 + int(frames[i+1])
        else:
            score += int(frames[i]) + int(frames[i+1])
        frame += 1
    return score