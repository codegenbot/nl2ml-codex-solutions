def fuel_cost(my_list):
    return sum(int((x - 2) / 3) for x in my_list)