def solve(N):
    return bin(sum([int(i) for i in bin(N)[2:].replace('0b', '')]))[2:]