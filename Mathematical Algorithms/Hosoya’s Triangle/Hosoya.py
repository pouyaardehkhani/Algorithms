def Hosoya(n, m):
    # Base case
    if ((n == 0 and m == 0) or
            (n == 1 and m == 0) or
            (n == 1 and m == 1) or
            (n == 2 and m == 1)):
        return 1

    # Recursive step
    if n > m:
        return Hosoya(n - 1, m) + Hosoya(n - 2, m)

    elif m == n:
        return Hosoya(n - 1, m - 1) + Hosoya(n - 2, m - 2)

    else:
        return 0


def printHosoya(n):
    for i in range(n):
        for j in range(i + 1):
            print(Hosoya(i, j), end=" ")
        print("\n", end="")