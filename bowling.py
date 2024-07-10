def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            if frames[i * 2 : i * 2 + 1] == "X":
                strike = True
            elif frames[i * 2 : i * 2 + 2].count("/"):
                spare = True
            else:
                score += 10 + int(frames[i * 2 + 1])
        else:
            if frames[i * 2 : i * 2 + 2].count("/"):
                score += 10 - int(frames[i * 2])
            elif frames[i * 2 : i * 2 + 2] == "X":
                score += 10
            else:
                score += int(frames[i * 2]) + int(frames[i * 2 + 1])
        if strike:
            if i < 8:
                score += 10 + int(frames[(i + 1) * 2])
    return score