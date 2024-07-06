def parse_music(music_string: str) -> list[int]:
    note_map = {'o': 4, '|': 2, '.|': 1}
    return [note_map[note] for note in music_string.split()]