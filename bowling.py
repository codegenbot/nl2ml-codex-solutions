def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += int(frame)
            roll = 1
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if roll == 1:
                score += first_roll + second_roll
            else:
                score += max(first_roll, second_roll) + min(first_roll, second_roll)
            roll = 0
        elif len(frame) > 2:
            strike = int(frame[0])
            next_two_rolls = map(int, frame[1:])
            if roll == 0:
                score += 10 + sum(next_two_rolls)
            else:
                score += strike + sum(next_two_rolls)
            roll = 1
    return score