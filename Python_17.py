```
from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.' and music_string[i+1] == '|':
            result.append(notes['.|.
                i += 2
        elif music_string[i] in notes:
            result.append(notes[music_string[i]])
            i += 1
        else:
            raise ValueError(f"Invalid note '{music_string[i]}'")
    return result