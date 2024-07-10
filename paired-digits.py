python


def paired_digits(s):
    return sum(
        int(d) for d in set([s[i] for i in range(len(s) - 1) if s[i] == s[i + 1]])
    )