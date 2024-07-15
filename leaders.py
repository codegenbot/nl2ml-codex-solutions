```
`````python
def leaders(input):
    leaders = [input[-1]]
    for i in range(len(input) - 2, -1, -1):
        if input[i] >= leaders[-1]:
            leaders.append(input[i])
    return list(reversed(leaders))
````