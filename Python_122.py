def add_elements(arr, k):
    return sum(num for num in arr if 10 <= num <= 100) if len(arr) >= k else sum(num for num in arr if 10 <= num <= 100) if arr else 0