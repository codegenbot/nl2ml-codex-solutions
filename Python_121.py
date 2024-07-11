```
def solution(lst):
    odd_sum = sum(i for i in lst[1::2] if i % 2 != 0)
    even_avg = sum(i for i in lst[::2]) / len([i for i in lst[::2]])
    return f"Sum of odd numbers: {odd_sum}\nAverage of even numbers: {even_avg}"

if __name__ == "__main__":
    user_input = input("Enter space-separated integers: ")
    numbers = user_input.split()
    
    for num in numbers:
        int_num = int(num)
        if not isinstance(int_num, int):
            raise ValueError
        
    lst = [int(i) for i in numbers]
    
    try:
        print(solution(lst))
    except ValueError:
        print("     Invalid input. Please enter only integers.")