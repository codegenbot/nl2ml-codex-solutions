```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '|':
            i += 1
        note = music_string[i:i+3]
        i += 3
        result.append(beats[note])
    return result