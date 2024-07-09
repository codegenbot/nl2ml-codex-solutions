from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1, "O|": 6, "O": 8, ".": 0}
    return [notes.get(note, -1) for note in music_string if note in notes]

input_string = input("Enter the music string: ").strip()
result = parse_music(input_string)
print(result)