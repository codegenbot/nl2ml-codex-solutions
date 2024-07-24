from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    return [notes[2:] for note in music_string.split()]

music_string = input().strip()
result = parse_music(music_string)
print(result)