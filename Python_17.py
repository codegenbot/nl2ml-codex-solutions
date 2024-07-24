```
def parse_music(music_string: str) -> List[int]:
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            if i+1 < len(music_string) and music_string[i+1] == '|':
                result.append(2)
                i += 2
            else:
                result.extend([4,4])
                i += 1
        elif music_string[i:i+3] == '.|.|':
            result.append(1)
            i += 3
    return result