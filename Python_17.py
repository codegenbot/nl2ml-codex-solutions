```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    note = ''
    for char in music_string:
        if char in ['o', 'o|']:
            note += char
        elif char == '|':
            if note == 'o|':
                result.append(beats_per_note['o|'])
            else:
                result.append(beats_per_note[note])
            note = ''
    if note != '':
        result.append(beats_per_note[note])
    return result