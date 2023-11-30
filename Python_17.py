from typing import List

def parse_music(music_string: str) -> List[int]:
    result = []
    if music_string == 'o':
        result.append(4)
    elif music_string == 'o|':
        result.append(2)
    else:
        result.append(1)
    return result

music_string = input("Enter the music string: ")
print(parse_music(music_string))