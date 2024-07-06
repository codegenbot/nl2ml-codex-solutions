def shopping_list():
    prices = input("Enter prices (e.g., 10.50 20.25): ").split()
    discounts = input("Enter discounts (e.g., 5% 10%): ").split()
    try:
        prices = [float(price) for price in prices]
        discounts = [float(discount) / 100 for discount in discounts]
        return round(np.sum([round(price * (1 - discount), 2) for price, discount in zip(prices, discounts)]), 2)
    except ValueError:
        print("Invalid input! Please enter valid numbers.")