```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30
            frame += 1
        elif frames[i] == '/':
            first_roll = int(frames[i+1])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame += 1
        else:
            first_roll = int(frames[i])
            second_roll = int(frames[i+1])
            if first_roll + second_roll == 10:
                score += first_roll + second_roll
                frame += 1
            elif first_roll == 10:
                score += first_roll
                frame += 1
                score += second_roll
                frame += 1
            else:
                score += first_roll + second_roll
                frame += 1
    return score