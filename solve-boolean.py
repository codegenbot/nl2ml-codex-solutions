solve_boolean = lambda expression: eval(
    expression.replace("T", "True").replace("F", "False")
)

input_str = input()
print(solve_boolean(input_str))