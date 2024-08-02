def int_to_mini_roman(number):
    roman = {
        1: "i",
        4: "iv",
        5: "v",
        9: "ix",
        10: "x",
        40: "xl",
        50: "l",
        90: "xc",
        100: "c",
        400: "cd",
        500: "d",
        900: "cm",
        1000: "m",
    }
    mini_roman = ""
    for value in sorted(roman.keys(), reverse=True):
        while number >= value:
            mini_roman += roman[value]
            number -= value
    return mini_roman.lower()