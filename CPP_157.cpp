float sides[3] = {a, b, c};
    sort(sides, sides + 3);
    return abs(sides[0] * sides[0] + sides[1] * sides[1] - sides[2] * sides[2]) < 0.0001;
}