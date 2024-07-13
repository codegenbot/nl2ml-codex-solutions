```
def parse_music(s):
    if not s:
        return []
    s = s.lower()
    beats = s.replace("|", " ").split()
    beat_counts = {}
    for beat in beats:
        if beat and ' ' in beat:  
            beat_count, _ = map(int, beat.split(' ', 1))
            if str(beat_count) in beat_counts:
                beat_counts[str(beat_count)] += 1
            else:
                beat_counts[str(beat_count)] = 1
    return [beat_counts.get(str(i), 0) for i in range(1, max(map(int, beats)) + 1)]