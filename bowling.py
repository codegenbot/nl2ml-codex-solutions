```
def calculate_score(frames):
    score = 0
    frame = []
    for char in frames:
        if char.isdigit():
            frame.append(int(char))
        else:
            if 'X' in str(frame) or '/' in str(frame):
                if len(frame) == 2:
                    if 'X' in str(frame):
                        score += 10 + max(frame)
                    elif '/' in str(frame):
                        score += 10 + sum(frame)
                else:
                    if 'X' in str(frame):
                        score += 10 + max(frame)
                    elif '/' in str(frame) and len(frame) == 2:
                        score += 10 + sum(frame)
                    else:
                        score += 10
                frame = []
            else:
                if len(frame) == 1:
                    if 'X' in str(frame):
                        score += 10
                    elif frame[0] < 10:
                        score += frame[0] + 1
                else:
                    score += sum(frame)
    return score

frames = input("Enter the frames string: ")
print(calculate_score(frames))