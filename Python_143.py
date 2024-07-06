def words_in_sentence(sentence):
    primes = [
        i
        for i in range(2, len(sentence.split()) + 1)
        if all(i % j for j in range(2, int(i**0.5) + 1))
    ]
    result = " ".join(
        [
            word
            for word, length in zip(sentence.split(), map(len, sentence.split()))
            if length in primes
        ]
    )
    return result