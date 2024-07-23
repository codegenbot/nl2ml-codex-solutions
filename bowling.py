```
def bowling_score(frames):
    frames = frames.replace('/', ' /').split()
    score = 0
    current_roll = 0

    for i in range(len(frames)):
        if len(frames[i]) == 1:  
            score += 10
            current_roll = 0
        elif frames[i] == "X":  
            score += 10
            current_roll = 0
        else:
            roll = int(frames[i])
            score += roll
            if i < len(frames) - 1 and frames[i + 1].isdigit():  
                current_roll = roll

    return score