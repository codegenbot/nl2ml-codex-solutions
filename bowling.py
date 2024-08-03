Here is the Python solution:

def bowling_score(game):
    score = 0
    frame = 1
    for bowl in game:
        if bowl == 'X':
            score += 10 + (10 - frame) * 10
            frame = 1
        elif bowl == '/':
            score += 10 + int(bowl[1]) * 10 - 5
            frame = 1
        else:
            score += int(bowl)
        if frame < 10:
            frame += 1
    return score