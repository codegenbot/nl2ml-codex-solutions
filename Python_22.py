```
def total_expenses(expenses: list) -> int:
    total = 0
    for expense in expenses:
        if isinstance(expense, list):
            try:
                total += sum(int(x) for x in expense)
            except ValueError:
                pass
        else:
            total += int(expense)
    return total


user_input = input("Please enter some values (separated by spaces): ")
try:
    expenses = [x.split(',') if ',' in x else [int(x)] for x in user_input.split()]
except ValueError as e:
    print(f"Invalid input: {e}")
    expenses = []
if expenses:
    print(total_expenses(expenses))