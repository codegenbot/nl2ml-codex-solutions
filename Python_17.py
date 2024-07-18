from typing import List


def parse_music(music_string: str) -> List[int]:
    beats = {"o": 4, "o|": 2, ".|": 1}
    return [beats[note] for note in music_string.split()]


music_input = input("Enter music string: ").strip()
result = parse_music(music_input)
print(result)