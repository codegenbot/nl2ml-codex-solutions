def solve(N):
    return bin(sum(int(b) for b in bin(N)[2:].replace("0", "")))[2:]