# This is a comment
# Add your code here...

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            j = i
            while j < len(text) and text[j:j+len(target)] == target:
                result.append(j)
                j += 1
    return result

a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))
text = input("Enter the text: ")
target = input("Enter the target: ")

print(gcd(a, b))
print(indices_of_substring(text, target))