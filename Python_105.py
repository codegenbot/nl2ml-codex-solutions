def by_length(arr):
    result = sorted([str(x) for x in arr if 1 <= x <= 9])
    result.reverse()
    return [f'{"One" if i == "1" else "Two" if i == "2" else "Three" if i == "3" else "Four" if i == "4" else "Five" if i == "5" else "Six" if i == "6" else "Seven" if i == "7" else "Eight" if i == "8" else "Nine"}' for i in result]