Here is the modified code:

```
def leaders(arr):
    leaders = [arr[len(arr)-1]]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= leaders[-1]:
            leaders.append(arr[i])
    return leaders[::-1]

print(leaders([19, 748, 560, 43, 279, 439, 440, 462, 50, 715, 551, 459, 413, 60, 509, 829, 451, 362, 316, 680]))