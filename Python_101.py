```
import re

def words_string(s):
    return re.split(r'[ ,]+', s.strip())