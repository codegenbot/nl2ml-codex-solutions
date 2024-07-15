def parse_music(music_input):
    if music_input.startswith("Title:"):
        return music_input.replace("Title:", "").strip()
    return None

while True:
    music_input = input("Enter music title: ").strip()
    if music_input == "EOF":
        break
    try:
        result = parse_music(music_input)
        if result is not None:
            print(result)
    except KeyboardInterrupt:
        break