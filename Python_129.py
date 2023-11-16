from itertools import permutations


def minPath(grid, k):
    """
    Given a grid with N rows and N columns (N >= 2) and a positive integer k, 
    each cell of the grid contains a value. Every integer in the range [1, N * N]
    inclusive appears exactly once on the cells of the grid.

    You have to find the minimum path of length k in the grid. You can start
    from any cell, and in each step you can move to any of the neighbor cells,
    in other words, you can go to cells which share an edge with you current
    cell.
    Please note that a path of length k means visiting exactly k cells (not
    necessarily distinct).
    You CANNOT go off the grid.
    A path A (of length k) is considered less than a path B (of length k) if
    after making the ordered lists of the values on the cells that A and B go
    through (let's call them lst_A and lst_B), lst_A is lexicographically less
    than lst_B, in other words, there exist an integer index i (1 <= i <= k)
    such that lst_A[i] < lst_B[i] and for any j (1 <= j < i) we have
    lst_A[j] = lst_B[j].
    It is guaranteed that the answer is unique.
    Return an ordered list of the values on the cells that the minimum path go through.

    Examples:


    # Your code here.
    # You may use the permutations function from itertools.
    # You may also define a helper function if you want.
    n = len(grid)
    all_permutations = permutations(range(1, n * n + 1), k)
    possible_paths = []
    for permutation in all_permutations:
        for i in range(n):
            for j in range(n):
                if grid[i][j] == permutation[0]:
                    path = [permutation[0]]
                    possible_paths.append(dfs(grid, i, j, n, permutation, path))
    return min(possible_paths)


def dfs(grid, i, j, n, permutation, path):
    if len(path) == len(permutation):
        return path
    for x, y in [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]:
        if 0 <= x < n and 0 <= y < n and grid[x][y] == permutation[len(path)]:
            path.append(grid[x][y])
            return dfs(grid, x, y, n, permutation, path)


if __name__ == '__main__':
    print(minPath([[5, 9, 3], [4, 1, 6], [7, 8, 2]], 1))
        Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
        Output: [1, 2, 1]

        Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
        Output: [1]
    """
