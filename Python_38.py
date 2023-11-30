import sys

def decode_cyclic():
    s = sys.stdin.readline().strip()
    return "".join([s[i - 1] + s[i - 2] + s[i] for i in range(1, len(s), 3)])

decode_cyclic()