def fizz_buzz(n: int):
    f = 0
    b = 0
    fb = 0

    for i in range(1, n + 1):
        if i % 3 == 0 and i % 5 == 0:
            fb += 1
        elif i % 3 == 0:
            f += 1
        elif i % 5 == 0:
            b += 1

    return str(f) + ", " + str(b) + ", " + str(fb)