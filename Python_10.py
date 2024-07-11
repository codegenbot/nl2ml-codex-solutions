def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s + s
    
    result = list(s)
    
    mid = len(result) // 2
    
    for i in range(len(result) - 1, mid - 1, -1):
        if result[0] != result[i]:
            result.insert(0, result.pop(i))
    
    return ''.join(result)