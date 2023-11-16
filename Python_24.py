

def largest_divisor(n: int) -> int:
    """ For a given number n, find the largest number that divides n evenly, smaller than n
    >>> largest_divisor(15)
    5
    for i in range(n - 1, 0, -1):
        if n % i == 0:
            return i


def main():
    print(largest_divisor(15))


if __name__ == '__main__':
    main()
    """
