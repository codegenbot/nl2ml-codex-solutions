```
def sort_array(array):
    if len(array) == 0:
        return array
    total = array[0] + array[-1]
    if total % 2 == 1:
        return sorted(array)
    else:
        return sorted(array, reverse=True)