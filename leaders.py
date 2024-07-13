def leaders(input_list):
    return [
        x
        for x in reversed(input_list)
        if all(x >= y for y in input_list[input_list.index(x) + 1 :])
    ]