```python
def parse_music(music_string: str) -> list:
    note_lengths = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            result.append(note_lengths['.|'])
            i += 3
        else:
            result.append(note_lengths[music_string[i:i+2]])
            i += 2
    return result