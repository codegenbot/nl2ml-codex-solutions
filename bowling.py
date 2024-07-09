def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i] == "X":
            score += 10 + (10 if frame < 9 else 0)
            frame += 1
        elif game[i] == "/":
            first_roll = int(game[i - 1])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame += 1
        else:
            first_roll = int(game[i])
            if game[i + 1] == "X":
                score += 10 + first_roll
                frame += 1
            elif game[i + 1] == "/":
                score += first_roll + 10 - first_roll
                frame += 2
            else:
                score += first_roll + int(game[i + 1])
                frame += 2
    return score