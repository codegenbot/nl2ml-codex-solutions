def bowling_score(frames):
    score = 0
    frames = [list(map(int, frame.split())) for frame in frames.split('/')]
    for i, frame in enumerate(frames):
        if len(frame) == 1:
            score += 10
        elif len(frame) == 2:
            score += sum(frame)
        else:
            first_two = sum(frame[:2])
            last_roll = frame[2]
            if first_two == 10:
                score += 10 + last_roll
            else:
                score += first_two + last_roll
    return score