def sort_even(l):
    evens = sorted([x for x in l if x >= 0 and x % 2 == 0])
    odds_pos = sorted([x for x in l if x > 0 and x % 2 != 0])
    neg_odds = sorted([-x for x in l if x < 0], key=lambda x: -abs(x))
    return evens + [0] + odds_pos + neg_odds


while True:
    user_input = input("Enter numbers separated by space: ")
    numbers = [int(i) for i in user_input.split()]
    if len(set(str(i) for i in numbers)) == len(numbers):
        break
    print("Invalid input. Please enter numeric values separated by spaces.")

print(sort_even(numbers))