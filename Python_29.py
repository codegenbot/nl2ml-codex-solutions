def filter_by_prefix() -> List[str]:
    strings = input("Enter a list of strings (space-separated): ")
    prefix = input("Enter a prefix: ")

    filtered_strings = [
        s.strip() for s in strings.split() if s.strip().startswith(prefix)
    ]

    return filtered_strings