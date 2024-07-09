def words_in_sentence(sentence):
    primes = [
        i
        for i in range(2, len(sentence.split()) + 1)
        if all(i % j != 0 for j in range(2, i))
    ]
    return " ".join([word for word in sentence.split() if len(word) in primes])