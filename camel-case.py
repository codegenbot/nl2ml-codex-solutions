```
def camel_case(s):
    return ''.join(word.capitalize() for word in s.replace('-', ' ').split())

print(camel_case("nospaceordash")) 
print(camel_case("two-words")) 
print(camel_case("two words")) 
print(camel_case("all separate words"))