Here is the solution:

def decode_cyclic(s: str):
    """
    """
    groups = [s[i:i+3] for i in range(0, len(s), 3)]
    return "".join([group[-1]+group[1:-1]+group[0] if len(group) == 3 else group for group in groups])