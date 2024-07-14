```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i] == 'X':
            score += 10
            if frame < 9 and game[i+1].isdigit():
                score += int(game[i+1])
            frame += 1
        elif game[i] == '/':
            first_roll = 10 - int(game[i-1])
            score += int(game[i-1]) + first_roll
            frame += 1
        else:
            first_roll = int(game[i])
            if game[i+1] == 'X':
                score += first_roll + 10
                frame += 1
            elif game[i+1] == '/':
                score += first_roll + (10 - first_roll)
                frame += 1
            else:
                score += first_roll + int(game[i+1])
                frame += (game[i+2] == 'X')
    return score