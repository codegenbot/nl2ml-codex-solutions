```
def parse_music(music_string: str) -> List[int]:
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == 'o|':
            if music_string[i+2] == '|':
                result.append(1)
                i += 3
            else:
                result.append(2)
                i += 2
        elif music_string[i] == 'o':
            result.append(4)
            i += 1
    return result