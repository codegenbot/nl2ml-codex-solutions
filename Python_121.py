
def solution(lst):
    """Given a non-empty list of integers, return the sum of all of the odd elements that are in even positions.
    

    Examples
    solution([5, 8, 7, 1]) ==> 20
    solution([3, 3, 3, 3, 3]) ==> 12
    pass

    return sum([x for i, x in enumerate(lst) if x % 2 == 1 and i % 2 == 0])
    solution([30, 13, 24, 321]) ==>13
    """
