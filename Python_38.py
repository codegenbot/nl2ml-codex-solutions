def decode_cyclic(s):
    if len(s) < 3:
        return None
    
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    decoded_groups = []
    for group in groups:
        if len(group) == 3:
            decoded_groups.append(group[1:] + group[:1])
        else:
            decoded_groups.append(group)
    
    return "".join(decoded_groups)