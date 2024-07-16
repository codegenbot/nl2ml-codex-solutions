def sort_third(l: list):
    sorted_triplets = [l[i : i + 3] for i in range(0, len(l) - 2, 3) if sum(l[i : i + 3]) % 2 != 0]
    return sorted(sorted_triplets, key=lambda x: x[2])