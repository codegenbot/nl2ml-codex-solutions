def calculate_score(bowls):
    score = 0
    frame = 1
    frame_index = 0
    while frame <= 10:
        if bowls[frame_index] == 'X':
            score += 10
            if frame < 10:
                score += get_strike_bonus(bowls, frame_index)
            frame_index += 1
        elif bowls[frame_index+1] == '/':
            score += 10
            if frame < 10:
                score += get_spare_bonus(bowls, frame_index)
            frame_index += 2
        else:
            score += int(bowls[frame_index]) + int(bowls[frame_index+1])
            frame_index += 2
        frame += 1
    return score

def get_strike_bonus(bowls, frame_index):
    bonus = 0
    if bowls[frame_index+2] == 'X':
        bonus += 10
        if bowls[frame_index+4] == 'X':
            bonus += 10
        else:
            bonus += int(bowls[frame_index+4])
    else:
        bonus += int(bowls[frame_index+2]) + int(bowls[frame_index+3])
    return bonus

def get_spare_bonus(bowls, frame_index):
    bonus = 0
    if bowls[frame_index+2] == 'X':
        bonus += 10
    else:
        bonus += int(bowls[frame_index+2])
    return bonus

bowls = input().strip()
score = calculate_score(bowls)
print(score)