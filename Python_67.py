def fruit_distribution(s):
    import re

    # Parse the input string to extract the number of apples and oranges
    apple_count = re.search("\d+", s)
    orange_count = re.search("\d+", s)

    if not (apple_count and orange_count):
        raise ValueError("Invalid input: missing 'apples' or 'oranges' in string")

    # Calculate the number of mango fruits in the basket
    mango_count = int(s.split()[-1]) - int(apple_count) - int(orange_count)

    return mango_count