Here is the solution:

def camel_case(input_string):
    output = input_string.title().replace("-", "").capitalize()
    return output

print(camel_case("nospaceordash")) # nospaceordash
print(camel_case("two-words")) # twoWords
print(camel_case("two words")) # two words
print(camel_case("all separate words")) # all separate words