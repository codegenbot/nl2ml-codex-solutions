```python
starting_height = float(input())
bounce_height = float(input())
num_bounces = int(input())

bounciness_index = bounce_height / starting_height
total_distance = starting_height

for _ in range(num_bounces):
    total_distance += 2 * bounce_height * bounciness_index
    bounce_height *= bounciness_index

print(total_distance)
```