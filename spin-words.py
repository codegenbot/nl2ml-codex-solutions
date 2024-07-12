def spin_words(sentence):
    return " ".join(
        [word[::-1] if len(word) >= 5 else word for word in sentence.split()]
    )


input_str = input()
result = spin_words(input_str)
print(result)