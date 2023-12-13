```python
starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height + first_bounce_height

for i in range(2, num_bounces + 1):
    total_distance += 2 * bounciness_index * total_distance
    bounciness_index *= first_bounce_height / starting_height

print(total_distance)
```