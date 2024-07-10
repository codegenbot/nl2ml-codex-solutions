def parse_music(music_data):
    notes = music_data.split()
    total_duration = 0
    for note in notes:
        duration, _ = note.split(":")
        total_duration += int(duration)
    return total_duration

music_data = raw_input("Enter notes separated by space and duration by colon: ")
print(parse_music(music_data))