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

    intersect_start = max(start1, start2)
    intersect_end = min(end1, end2)

    if intersect_start > intersect_end:
        return "NO"

    length = intersect_end - intersect_start + 1

    return "YES" if is_prime(length) else "NO"