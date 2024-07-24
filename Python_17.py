from typing import List

def parse_music(music_string: str) -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".|": 1}
    return [notes_duration[note] for note in music_string.split()]

# Sample music string for testing
music_string = "o o| .| o"
result = parse_music(music_string)
print(result)