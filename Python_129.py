def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    dp = [[[float("inf")] * (k + 1) for _ in range(n)] for _ in range(n)]
    dp[0][0][0] = m[0][0]
    for i in range(1, n):
        dp[i][0][0] = min(dp[i - 1][0][0], m[i][0])
    for j in range(1, n):
        dp[0][j][0] = min(dp[0][j - 1][0], m[0][j])
    for i in range(1, n):
        for j in range(1, n):
            dp[i][j][0] = min(min(dp[i - 1][j][0], dp[i][j - 1][0]), m[i][j])
    for l in range(1, k + 1):
        for i in range(n):
            for j in range(n):
                if l == 1:
                    dp[i][j][l] = min(
                        dp[max(i - 1, 0)][j][l - 1], dp[i][max(j - 1, 0)][l - 1]
                    )
                else:
                    dp[i][j][l] = min(
                        min(dp[max(i - 1, 0)][j][l - 1], dp[i][max(j - 1, 0)][l - 1]),
                        m[i][j],
                    )
    path = []
    i, j = n - 1, n - 1
    for _ in range(k):
        path.append(m[i][j])
        if i > 0 and dp[i - 1][j][k - 1] < dp[i][j][k - 1]:
            i -= 1
        elif j > 0 and dp[i][j - 1][k - 1] < dp[i][j][k - 1]:
            j -= 1
    return path[::-1]