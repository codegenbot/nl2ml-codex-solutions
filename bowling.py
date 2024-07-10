```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == 'X':
            score += 30
        elif '/' in frames[i]:
            first_roll, second_roll = map(int, frames[i].split('/'))
            score += first_roll + second_roll
        else:
            score += sum(map(int, frames[i]))
    return score