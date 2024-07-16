```
def bowling_score(frames):
    score = 0
    frame_num = 1
    for char in frames:
        if char == 'X':
            score += 30
            frame_num += 1
        elif char == '/':
            first_roll, second_roll = map(int, frames[:frames.index(char)].split('/'))
            score += first_roll + second_roll
            frame_num += 1
            frames = frames[frames.index(char):]
        else:
            if frame_num < 10:
                if len(frames) > 2 and frames[1] == 'X' and char == '0':
                    score += 20
                    frame_num += 1
                    frames = ''
                else:
                    score += int(char)
                    frame_num += 1
    return score