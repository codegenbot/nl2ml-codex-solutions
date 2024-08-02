````
from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            i += 3
        elif music_string[i:i+2] in notes:
            result.append(notes[music_string[i:i+2]])
            i += 2
        else:
            i += 1
    return result