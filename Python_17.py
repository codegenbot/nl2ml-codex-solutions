Here is the solution to the problem:

```python
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    note = ''
    
    for char in music_string:
        if char in ['o', '|']:
            if note:
                result.append(beats_per_note[note])
            note = ''.join([note, char])
        elif char == '.' and note == '.|':
            note += char
        else:
            pass
    
    result.append(beats_per_note.get(note, 0))
    
    return result