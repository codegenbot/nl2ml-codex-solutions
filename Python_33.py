def sort_third(l: list):
    return sorted([sorted(l[i:i+3], reverse=True) if len(l[i:i+3]) >= 3 else l[i:i+3] for i in range(0, len(l), 3)], key=lambda x: x[-1], reverse=True)