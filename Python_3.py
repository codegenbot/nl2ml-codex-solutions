from typing import List


def below_zero() -> None:
    cont = "yes"
    balance = 0
    below_zero_found = False
    below_zero_operations = 0

    while True:
        operations = []
        while True:
            ops = input(
                "Enter a list of integers (space separated) or 'end' to finish: "
            )
            if ops.lower() == "end":
                break
            try:
                operations = [int(op) for op in ops.split()]
                break
            except ValueError:
                print("Error: Invalid input. Please enter a list of integers.")

        for operation in operations:
            if isinstance(operation, int):
                balance += operation
                if balance < 0:
                    print(f"Below zero at {balance}.")
                    below_zero_found = True
                    below_zero_operations += 1
            else:
                print("Error: Invalid input. Please enter a list of integers.")

        if not below_zero_found:
            print(f"No below zero at {balance}.")

        cont = input("Continue? (yes/no): ")
        if cont.lower() != "yes":
            break

        if below_zero_operations / len(operations) > 0.5:
            while True:
                ops = input(
                    "Enter a list of integers (space separated) or 'end' to finish: "
                )
                if ops.lower() == "end":
                    break
                try:
                    operations = [int(op) for op in ops.split()]
                    balance = 0
                    below_zero_found = False
                    below_zero_operations = 0
                    for operation in operations:
                        if isinstance(operation, int):
                            balance += operation
                            if balance < 0:
                                print(f"Below zero at {balance}.")
                                below_zero_found = True
                                below_zero_operations += 1
                        else:
                            print(
                                "Error: Invalid input. Please enter a list of integers."
                            )

                    if not below_zero_found:
                        print(f"No below zero at {balance}.")

                    cont = input("Continue? (yes/no): ")
                except ValueError:
                    print("Error: Invalid input. Please enter a list of integers.")