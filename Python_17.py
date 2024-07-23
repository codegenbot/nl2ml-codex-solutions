```
def parse_music(music_string: str) -> List[int]:
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == 'o|':
            music_list.append(4)
            i += 2
        elif music_string[i:i+3] == '.|..|':
            music_list.append(1)
            i += 3
        elif music_string[i:i+5] == '..|.|.
            music_list.append(0.5)
            i += 5
    return music_list