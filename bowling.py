```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        frame_score = 0
        if frames[i] == "X":
            frame_score = 10
            if i + 1 < len(frames) and frames[i+1].isdigit():
                frame_score += int(frames[i+1])
            i += 2
        elif frames[i] == "/":
            frame_score = 10
            if i + 1 < len(frames) and frames[i+1].isdigit():
                frame_score += int(frames[i+1])
                i += 2
            else:
                i += 1
        else:
            for j in range(int(frames[i])):
                if i < len(frames) - 1 and frames[i+1].isdigit():
                    frame_score += int(frames[i+1])
                    break
                else:
                    frame_score += 10 - int(frames[i])
            i += 2
        score += frame_score
    return score