```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            result.append(1)
            i += 3
        else:
            note = ''
            while i < len(music_string) and (music_string[i].isalnum() or music_string[i] in beats_per_note.keys()):
                note += music_string[i]
                i += 1
            if note in beats_per_note.keys():
                result.append(beats_per_note[note])
            else:
                result.append(4)
    return result