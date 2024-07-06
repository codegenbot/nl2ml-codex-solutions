def how_many_times(string: str, substring: str) -> int:
    return len(
        [i for i in range(len(string)) if string[i : i + len(substring)] == substring]
    )