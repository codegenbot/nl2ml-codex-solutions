from typing import List
def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    return [notes[note] for note in music_string.split()]

# Test the function with valid input
input_string = "o o| .| o"
print(parse_music(input_string))