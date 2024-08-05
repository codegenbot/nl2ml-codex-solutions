def bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10:
        if bowls[bowl_index] == "X":
            score += 10
            score += get_strike_bonus(bowls, bowl_index)
            bowl_index += 1
        elif bowls[bowl_index + 1] == "/":
            score += 10
            score += get_spare_bonus(bowls, bowl_index)
            bowl_index += 2
        elif bowls[bowl_index] == "-":
            score += 0
            bowl_index += 1
        else:
            score += int(bowls[bowl_index])
            if bowls[bowl_index + 1] != "-":
                score += int(bowls[bowl_index + 1])
            bowl_index += 2
        frame += 1
    return score


def get_strike_bonus(bowls, index):
    bonus = 0
    if bowls[index + 2] == "X":
        bonus += 10
        if bowls[index + 4] == "X":
            bonus += 10
        else:
            bonus += int(bowls[index + 4])
    else:
        bonus += int(bowls[index + 2])
        if bowls[index + 3] == "/":
            bonus += 10 - int(bowls[index + 2])
    return bonus


def get_spare_bonus(bowls, index):
    bonus = 0
    if bowls[index + 2] == "X":
        bonus += 10
    else:
        bonus += int(bowls[index + 2])
    return bonus


bowls = input()
print(bowling_score(bowls))