def remove_duplicates(numbers: list) -> list:
    unique_elements = set()
    for num in numbers:
        if num not in unique_elements:
            unique_elements.add(num)
    return list(unique_elements)