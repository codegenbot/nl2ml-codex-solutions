def solution(lst):
    return sum(i for i, _ in enumerate(lst) if i % 2 != 0 and i % 2 == 0)