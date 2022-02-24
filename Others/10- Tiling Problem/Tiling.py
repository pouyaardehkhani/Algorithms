def getNoOfWays(n):
    # Base case
    if n <= 2:
        return n
    return getNoOfWays(n - 1) + getNoOfWays(n - 2)