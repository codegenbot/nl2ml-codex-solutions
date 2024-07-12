def parse_music(music_string: str) -> list:
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == 'o|':
            music_list.append(2)
            i += 2
        elif music_string[i:i+3] == '| .|':
            music_list.append(1)
            i += 3
        elif music_string[i:i+5] == '..|.||.|':
            music_list.append(0.5)
            i += 5
        elif music_string[i:i+2] == 'o o':
            music_list.append(4)
            i += 2
        elif music_string[i:i+3] == 'o o|':
            music_list.append(2)
            i += 3
        elif music_string[i:i+2] == 'o o|':
            music_list.append(4)
            i += 2
    return music_list