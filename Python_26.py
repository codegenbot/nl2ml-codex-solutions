def remove_duplicates(input_list=None):
    if input_list is None:
        numbers = input("Enter comma-separated numbers: ")
        input_list = list(map(int, numbers.split(",")))
        
    return [x for x in sorted(set(input_list))]