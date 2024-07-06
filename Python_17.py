def parse_music(music_string: str) -> List[int]:
    beats = [0]
    for note in music_string.split():
        if note == "o":
            beats.append(4)
        elif note == "o|":
            beats.append(2)
        elif note == ".|":
            beats.append(1)
    return beats[1:]