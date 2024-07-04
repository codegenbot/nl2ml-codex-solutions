from typing import List

def parse_music(music_string: str) -> List[int]:
    note_to_beats = {'o': 4, 'o|': 2, '.|': 1}
    notes = music_string.strip().split(" ")
    return [note_to_beats.get(note, 0) for note in notes]

if __name__ == "__main__":
    music_string = input("Enter the music notes separated by spaces (valid notes are 'o', 'o|', '.|'): ").strip()
    print(parse_music(music_string))