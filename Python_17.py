```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            note_type = music_string[i+1:i+3]
            if note_type in beats_per_note:
                result.append(beats_per_note[note_type])
            else:
                result.append(4)
            i += 2
        else:
            note_type = music_string[i:i+2]
            if note_type in beats_per_note:
                result.append(beats_per_note[note_type])
            else:
                result.append(4)
            i += 2
    return result