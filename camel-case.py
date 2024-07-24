Here is the Python solution for the problem:

def camel_case(input_string):
    return ' '.join(word.capitalize() for word in input_string.split())

print(camel_case("nospaceordash")) 
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))