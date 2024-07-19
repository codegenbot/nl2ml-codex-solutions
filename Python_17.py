```
from typing import List


def parse_music(music_string: str) -> List[int]:
    music_list = []
    note_map = {'o': 4, 'o|': 2, '.|': 1}
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            i += 3
        else:
            music_list.append(note_map[music_string[i:i+2]])
            i += 2
    return music_list