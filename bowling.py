def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i] == "X":
            score += 10 + (10 if frame < 9 and s[i + 2 : i + 4] == "/0" else 0)
            frame += 1
        elif s[i] == "/":
            strike = False
            if s[i + 1] != "0":
                first_roll = int(s[i + 1])
                score += first_roll
                frame += 1
            else:
                strike = True
        else:
            first_roll = int(s[i])
            second_roll = int(s[i + 1])
            score += first_roll + second_roll
            frame += 1
    return score