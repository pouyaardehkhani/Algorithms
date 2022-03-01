def countDyckPaths(n):
    # Compute value of 2nCn
    res = 1
    for i in range(0, n):
        res *= (2 * n - i)
        res /= (i + 1)

    # return 2nCn/(n+1)
    return res / (n + 1)