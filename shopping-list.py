def main():
    n = int(input())
    items = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = sum(
        [price * (1 - discount / 100) for price, discount in zip(items, discounts)]
    )
    print("{:.2f}".format(total_price))


if __name__ == "__main__":
    main()