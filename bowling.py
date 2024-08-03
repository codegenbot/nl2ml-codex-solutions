```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            if s[i+1] == '/':
                first_roll = int(s[i])
                second_roll = 10 - first_roll
                score += first_roll + second_roll
                frame += 1
            else:
                for j in range(first_roll, 11):
                    if str(j) * 2 == s[i:i+2]:
                        score += j
                        frame += 1
                        break
        elif s[i] == 'X':
            score += 10
            frame += 1
    return score