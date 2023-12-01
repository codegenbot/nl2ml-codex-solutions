def parse_music(music_string: str) -> List[int]:
    from typing import List
    notes = []
    for note in music_string.split():
        if note == 'o':
            notes.append(4)
        elif note == 'o|':
            notes.append(2)
        elif note == '.|':
            notes.append(1)
    return notes