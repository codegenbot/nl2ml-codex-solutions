```
from typing import List


def parse_music(music_string: str) -> List[int]:
    if not (music_string.startswith('o|') or music_string.startswith('.||||')):
        return []
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == 'o|':
            if i + 1 >= len(music_string) or music_string[i+2] != '|': 
                return []  
            music_list.append(3)
            i += 2
        elif music_string[i:i+4] == '.||||':
            if i + 3 >= len(music_string) or music_string[i+4] != '|': 
                return []  
            music_list.append(1)
            i += 4
        elif music_string[i] == 'o':
            if i + 5 <= len(music_string):
                if music_string[i:i+6] == 'oooou':
                    music_list.append(2)
                    i += 6
                else:
                    if i + 1 >= len(music_string): 
                        return []  
                    music_list.append(4)
                    i += 1
            else:
                music_list.append(4)
                i += 1
    return music_list