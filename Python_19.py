def sort_numbers():
    while True:
        print("Sort numbers? (y/n): ")
        cont = input().lower()
        if cont != "y":
            break
        while True:
            while True:
                try:
                    numbers = input("Enter space-separated numbers: ")
                    nums = [int(num) for num in numbers.split()]
                    sorted_numbers = " ".join(map(str, sorted(nums)))
                    print(sorted_numbers)
                    cont = input("Sort again? (y/n): ")
                    if cont.lower() != "y":
                        break
                    break
                except ValueError as e:
                    print(
                        f"Invalid input. {e}. Please enter valid numbers separated by spaces."
                    )
            if cont.lower() != "y":
                break
        break


sort_numbers()