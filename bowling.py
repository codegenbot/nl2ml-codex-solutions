def calculate_bowling_score(input_str):
    score = 0
    frame = 1
    rolls = list(input_str.replace("-", "0"))

    for i in range(len(rolls)):
        if rolls[i] == "X":
            score += 10
            if frame < 10 and rolls[i] != "/":
                score += sum(int(rolls[j]) for j in range(i + 1, i + 3) if rolls[j] != "/")
                frame += 1
        elif rolls[i] == "/":
            score += 10 - int(rolls[i - 1]) + int(rolls[i + 1]) if i + 1 < len(rolls) else 0
            if frame < 10 and rolls[i] != "/":
                frame += 1
        else:
            score += int(rolls[i])

    return score

input_str = input()
print(calculate_bowling_score(input_str))