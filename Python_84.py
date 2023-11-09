
def solve(N):
    """Given a positive integer N, return the total sum of its digits in binary.
    
    Example
        For N = 1000, the sum of digits will be 1 the output should be "3".
        For N = 150, the sum of digits will be 6 the output should be "10010".
        For N = 147, the sum of digits will be 12 the output should be "10011".
    
    Variables:
        @N integer
             Constraints: 0 ≤ N ≤ 10000.
    Output:
         a string of binary number
    """
    return bin(N).count('1')
