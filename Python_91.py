```
def is_bored(S):
    return len([sentence for sentence in S.split('. ') + S.split('? ') + S.split('! ') if sentence.strip() and sentence.strip().lower().startswith('i')])