def histogram(test=None):
    from collections import Counter
    
    if test is None:
        test = input().strip()
    if not test:
        return {}
    counts = Counter(test.split())
    max_count = max(counts.values(), default=0)
    return {k: v for k, v in counts.items() if v == max_count}

if __name__ == "__main__":
    print(histogram())