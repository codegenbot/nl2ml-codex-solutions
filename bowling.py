import re

user_input = input()
frames = [
    int("".join(filter(str.isdigit, frame)))
    for frame in user_input.split("\n")
    if len(frame.replace("-", "")) > 0
]

total_score = sum(
    [
        (
            min(10, k) + (k - 1) * 1
            if k < 10
            else k + 30 if "X" in frame else min(k // 2, k)
        )
        for k, frame in zip(
            frames, [len("".join(filter(str.isdigit, f))) for f in frames]
        )
    ]
)

print(total_score)