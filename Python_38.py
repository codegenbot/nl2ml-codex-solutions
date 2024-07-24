def encode_cyclic(s: str):
    return "".join(
        [
            (
                s[i : i + 3][1:] + s[i : i + 3][0]
                if len(s[i : i + 3]) == 3
                else s[i : i + 3]
            )
            for i in range(0, len(s), 3)
        ]
    )


def decode_cyclic(s: str):
    return "".join(
        ["".join([s[i], s[i + 9]]) if i % 9 < 6 else s[i] for i in range(len(s))]
    )