def solve(N):
    return bin(sum(int(x) for x in str(N)))[2:]