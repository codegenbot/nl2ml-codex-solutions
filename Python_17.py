from typing import List

def parse_music(music_string: str) -> List[int]:
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            music_list.append(4)
            i += 1
        elif i+1 < len(music_string) and music_string[i:i+2] == 'o|':
            music_list.append(2)
            i += 2
        elif i+2 < len(music_string) and music_string[i:i+3] == '.|':
            music_list.append(1)
            i += 3
        else:
            raise ValueError("Invalid input")
    return music_list