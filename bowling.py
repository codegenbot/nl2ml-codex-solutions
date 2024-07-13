def bowling(score_str):
    score = 0
    frame = 1
    rolls = []
    for char in score_str:
        if char == "X":
            rolls.append(10)
            if frame < 10:
                rolls.append(0)
        elif char == "/":
            rolls.append(10 - rolls[-1])
        elif char == "-":
            rolls.append(0)
        else:
            rolls.append(int(char))

        if len(rolls) >= 2 and (rolls[-2] == 10 or len(rolls) % 2 == 0):
            score += sum(rolls[-3:])
            frame += 1
        if frame > 10:
            break

    return score


# Read input from user
score_str = input()
print(bowling(score_str))