def filter_by_prefix(strings: str, prefix: str) -> None:
    while True:
        try:
            strings = strings.split(",")
            filtered_strings = [
                s.strip()
                for s in strings
                if len(strings) > 1 and s.strip().startswith(prefix)
            ]

            print(filtered_strings)
            break
        except ValueError as e:
            print(f"Error occurred: {e}")