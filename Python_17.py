from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    music_list = []
    note = ''
    for char in music_string:
        if char in ['o', '|']:
            if note:
                music_list.append(beats_per_note.get(note, 0))
            note = char
        elif char == '.':
            note += char
    if note:
        music_list.append(beats_per_note.get(note, 0))
    return music_list