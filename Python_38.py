
def decode_cyclic(s: str):
    if len(s) % 3 != 0:
        raise ValueError("Input string length must be divisible by 3")
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    decoded_groups = [
        (group[1:] + group[0]) if len(group) == 3 else group for group in groups
    ]
    return "".join(decoded_groups)