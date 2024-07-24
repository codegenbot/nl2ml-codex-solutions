def parse_music(music_string: str) -> List[int]:
    beats = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            note = music_string[i+1:i+3]
            i += 3
            result.append(beats.get(note, 4))
        else:
            note = music_string[i:i+2]
            i += 2
            result.append(beats[note])
    return result