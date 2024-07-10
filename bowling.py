def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            if frames[i * 2] == "X":
                strike = True
            elif frames[i * 2] + frames[i * 2 + 1] == "10":
                spare = True
            else:
                score += int(frames[i * 2])
                score += int(frames[i * 2 + 1])
        else:
            if frames[i * 2] == "X" and i < 9:
                strike = True
            elif frames[i * 2] + frames[i * 2 + 1] == "10":
                spare = True
            else:
                score += int(frames[i * 2]) + int(frames[i * 2 + 1])
        if strike:
            score += 10 + sum(int(x) for x in frames[2 * i + 2 :])
        elif spare:
            score += 10 + sum(int(x) for x in frames[2 * i + 2 : 2 * (i + 1)])
    return score