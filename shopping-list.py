n = int(input("Enter the number of goods: "))
if n < 1:
    print("Error: Number of goods should be greater than zero.")
else:
    total_price = 0
    for _ in range(n):
        prices_discounts = input().split()
        if len(prices_discounts) != 2 * n:
            print("Error: Invalid input. Each line should contain 'price discount' pairs.")
            exit()
        total_price += sum([float(price) * (1 - float(discount) / 100.0) for price, discount in zip(prices_discounts[::2], prices_discounts[1::2])])
    print(format(total_price, ".2f"))