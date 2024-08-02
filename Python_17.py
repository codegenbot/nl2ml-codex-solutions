Here is the modified code:

```
def parse_music(music_string: str) -> List[int]:
    beats = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            beats.append(4)
            i += 1
        elif music_string[i:i+2] == 'o|':
            beats.append(2)
            i += 2
        elif music_string[i:i+3] == '.|':
            beats.append(1)
            i += 3
    return beats