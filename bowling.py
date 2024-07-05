```
def bowling_score(frames):
    score = 0
    i = 0

    while i < len(frames):
        if frames[i] == 'X':
            score += 10
            i += 1
            if i < len(frames) and (frames[i] == 'X' or frames[i].isdigit()):
                score += 10
                if frames[i].isdigit():
                    score += int(frames[i])
                i += 1
        elif '/' in frames[i:]:
            score += 10
            if i + 1 < len(frames) and frames[i+1].isdigit():
                score += int(frames[i+1])
            i += 2
        else:
            temp = ''
            while i < len(frames) and frames[i].isdigit():
                temp += frames[i]
                i += 1
            if len(temp) == 1:
                score += int(temp)
            elif len(temp) == 2:
                score += int(temp)

    return score