def bowling_score(frames):
    score = 0
    frame_count = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += int(frame)
            frame_count += 1
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame_count += 1
        else:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            third_roll = 10 - (first_roll + second_roll)
            if third_roll == 0:
                third_roll = 10
            score += first_roll + second_roll + third_roll
            frame_count += 1
    return score