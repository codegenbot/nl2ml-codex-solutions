def bowling_score(frames):
    score = 0
    frames = [frame.strip().replace("-", "") for frame in frames.split("\n")]
    for i, frame in enumerate(frames):
        if len(frame) == 2:
            if frame[0] == "X":
                score += 10
                if i < 9:
                    next_frame = frames[i + 1]
                    if next_frame[0] == "X" or (len(next_frame) > 1 and next_frame[1] != "/"):
                        score += 10
            elif frame[1] == "/":
                frame_parts = list(frame)
                total_pins = 0
                for j in range(len(frame_parts)):
                    if frame_parts[j].isdigit():
                        total_pins += int(frame_parts[j])
                    elif frame_parts[j] == "X":
                        total_pins += 10
                        if j < len(frame_parts) - 1 and frame_parts[j+1].isdigit():
                            total_pins += int(frame_parts[j+1])
                    elif frame_parts[j] == "/":
                        if frame_parts[j-1].isdigit():
                            total_pins += 10 - int(frame_parts[j-1])
                    if j == len(frame_parts) - 1:
                        break
                score += total_pins
        else:
            frame_parts = list(frame)
            total_pins = 0
            for j in range(len(frame_parts)):
                if frame_parts[j].isdigit():
                    total_pins += int(frame_parts[j])
            score += total_pins
    return score

print(bowling_score("8-324333X518-3463X83"))