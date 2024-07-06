def parse_music(music_string: str) -> list[int]:
    notes = music_string.split()
    note_lengths = []
    for note in notes:
        if note == "o":
            note_lengths.append(4)
        elif note == "o|":
            note_lengths.append(2)
        else:
            note_lengths.append(1)
    return note_lengths