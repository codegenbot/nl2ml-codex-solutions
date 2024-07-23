def by_length(arr):
    result = sorted([str(num) for num in arr if 1 <= num <= 9])
    result.reverse()
    return [name_dict[int(i)] for i in result]


name_dict = {
    "1": "One",
    "2": "Two",
    "3": "Three",
    "4": "Four",
    "5": "Five",
    "6": "Six",
    "7": "Seven",
    "8": "Eight",
    "9": "Nine",
}