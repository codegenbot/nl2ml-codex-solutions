```
def is_bored(S):
    return len([s for s in S.split('. ') + S.split('? ') + S.split('! ') if s.strip() and s.lower().startswith('i')])