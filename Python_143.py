def words_in_sentence(sentence):
    primes = [
        i
        for i in range(2, len(max(sentence.split(), key=len)))
        if all(i % j != 0 for j in range(2, int(i**0.5) + 1))
    ]
    return " ".join([word for word in sentence.split() if len(word) in primes])