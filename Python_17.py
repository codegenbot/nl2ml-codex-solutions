```
from typing import List


def parse_music(music_string: str) -> List[int]:
    music_list = []
    for char in music_string:
        if char == 'o':
            music_list.append(4)
        elif char == 'o|':
            music_list.append(2)
        elif char == '.|':
            music_list.append(1)
    return music_list