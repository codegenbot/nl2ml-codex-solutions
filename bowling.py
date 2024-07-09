def bowling_score(frames):
    score = 0
    strike_count = 0
    for i in range(10):
        if "/" in frames[i]:
            parts = frames[i].split("/")
            if len(parts) == 2:
                score += min(int(parts[0]), 10)
                if int(parts[0]) < 10:
                    score += 10 - int(parts[0])
            else:
                score += 10
        elif "X" in frames[i]:
            score += 10
            strike_count = i + 1
        else:
            score += sum(int(part) for part in frames[i].split(" "))
    if strike_count == 10:
        return score
    for i in range(strike_count, 10):
        if "X" in frames[i]:
            score += 10
        elif "/" in frames[i]:
            parts = frames[i].split("/")
            score += sum(int(part) for part in parts)
        else:
            score += sum(int(part) for part in frames[i].split(" "))
    return score