def nearestSmallerEqFib(n):
    # Corner cases
    if n == 0 or n == 1:
        return n

    # Finds the greatest Fibonacci Number smaller
    # than n.
    f1, f2, f3 = 0, 1, 1
    while f3 <= n:
        f1 = f2
        f2 = f3
        f3 = f1 + f2
    return f2


def printFibRepresntation(n):
    while n > 0:
        # Find the greates Fibonacci Number smaller
        # than or equal to n
        f = nearestSmallerEqFib(n)

        # Print the found fibonacci number
        print(f, end=" ")

        # Reduce n
        n = n - f