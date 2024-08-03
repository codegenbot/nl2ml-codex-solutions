```
def camel_case(input_str):
    return ''.join(word.capitalize() for word in input_str.split()) if '-' not in input_str else ' '.join([''.join(word.capitalize() for word in group.split('-')) for group in input_str.split(' ')])

print(camel_case("nospaceordash"))
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))