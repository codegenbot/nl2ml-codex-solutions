def sort_third(l: list):
    sorted_triplets = [sorted(l[i: i + 3]) for i in range(0, len(l) - 2, 3) if sum(sorted(l[i: i + 3])[2]) % 2 == 0]
    return sorted(sorted_triplets)