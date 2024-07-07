def shopping_list(prices, discounts):
    total_price = 0
    # Validate input
    for i in range(min(len(prices), len(discounts))):
        try:
            price = float(prices[i])
            discount = float(discounts[i])
            total_price += price * (1 - discount)
        except ValueError:
            print("Invalid price or discount! Please enter a valid number.")
            return None
    # Check if there are fewer discounts than prices
    if len(prices) > len(discounts):
        for i in range(len(discounts), len(prices)):
            try:
                price = float(prices[i])
                discount = 0.0
                total_price += price * (1 - discount)
            except ValueError:
                print("Invalid price! Please enter a valid number.")
                return None
    # Round result to two decimal places
    return round(total_price, 2)