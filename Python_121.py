def solution(lst):
    return (
        sum(i for i in lst if i % 2 == 0)
        if len(lst) % 2 != 0
        else sum(i for i in lst[1:] if i % 2 == 0)
    )