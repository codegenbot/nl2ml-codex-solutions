def camel_case(s):
    return "".join(word.capitalize() for word in s.replace("-", " ").split())


while True:
    s = input()
    print(camel_case(s))