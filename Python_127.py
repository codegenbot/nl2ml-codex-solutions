def intersection(interval1, interval2):
    def is_prime(n):
        if n <= 1:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    start1, end1 = interval1
    start2, end2 = interval2

    inter_start = max(start1, start2)
    inter_end = min(end1, end2)

    if inter_start > inter_end:
        return "NO"

    inter_length = inter_end - inter_start + 1

    return "YES" if is_prime(inter_length) else "NO"