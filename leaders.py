Here is the solution:

def leaders(vector):
    return [vector[i] for i in range(len(vector)-1, -1, -1) if all(x <= vector[i] for x in vector[i+1:])]

print(leaders([int(i) for i in input().split()]))