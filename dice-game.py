n = int(input())
m = int(input())

def probability_of_peter_winning(n, m):
    total_outcomes = n * m
    favorable_outcomes = (n - 1) * m
    return favorable_outcomes / total_outcomes

print(probability_of_peter_winning(n, m))