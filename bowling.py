```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            score += 30
            i += 1
            if i < len(frames) and frames[i] == 'X':
                score += 30
                i += 1
            elif i < len(frames):
                try:
                    first_roll = int(''.join(c for c in frames[i].replace(" ", "") if c.isdigit()))
                    score += first_roll
                except ValueError:
                    pass
                i += 1
        elif frames[i] == '/':
            score += 10
            i += 1
            try:
                second_roll = int(''.join(c for c in frames[i].replace(" ", "") if c.isdigit()))
                score += second_roll
            except ValueError:
                pass
            i += 1
        else:
            first_roll = ''.join(c for c in frames[i].replace(" ", "") if c.isdigit())
            try:
                first_roll = int(first_roll)
            except ValueError:
                pass
            if i < len(frames) - 1 and frames[i+1] == 'X':
                second_roll = 10
                score += first_roll + second_roll
                i += 2
            elif i < len(frames) - 1:
                try:
                    second_roll = int(''.join(c for c in frames[i+1].replace(" ", "") if c.isdigit()))
                    score += first_roll + second_roll
                    i += 2
                except ValueError:
                    pass
            else:
                score += first_roll
                i += 1
    return score

print(bowling_score("X|X|7/4|5|6|8-3|9-0|10|-5|-10|-"))