def camel_case(string):
    words = string.split('-')
    return ''.join([word.title() for word in words])

# test cases
assert camel_case("camel-case") == "CamelCase"
assert camel_case("example-test-string") == "ExampleTestString"
assert camel_case("two-words") == "TwoWords"
assert camel_case("two words") == "Two words"
assert camel_case("all separate words") == "All separate words"