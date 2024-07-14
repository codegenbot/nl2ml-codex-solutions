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
            if frames[i * 2] == "X":
                strike = True
            elif frames[i * 2] + frames[i * 2 + 1] == "10":
                spare = True
            else:
                score += int(frames[i * 2]) + int(frames[i * 2 + 1])
        if i < 9 and (strike or spare):
            if strike:
                score += 10 + sum(map(int, frames[18:]))
            elif spare:
                score += 10 + sum(map(int, frames[19:]))
    return score