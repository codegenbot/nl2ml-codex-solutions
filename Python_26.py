from typing import List


def remove_duplicates(input_string: str) -> List[str]:
    numbers = list(map(str, ''.join(filter(str.isdigit, input_string)).split(',')))
    return list(set(numbers))


result = remove_duplicates(input("Enter your string: "))
print(result)