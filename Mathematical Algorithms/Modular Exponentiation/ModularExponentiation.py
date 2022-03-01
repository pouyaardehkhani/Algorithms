# Iterative Function to calculate
# (x^y)%p in O(log y)
def exponentModI(x, y, p):
    res = 1
    x = x % p
    if x == 0:
        return 0
    while y > 0:
        if (y & 1) == 1:
            res = (res * x) % p
        y = y >> 1
        x = (x * x) % p
    return res


# Recursive Python program
# to compute modular power
def exponentModR(A, B, C):
    if A == 0:
        return 0
    if B == 0:
        return 1
    y = 0
    if B % 2 == 0:
        y = exponentModR(A, B / 2, C)
        y = (y * y) % C
    else:
        y = A % C
        y = (y * exponentModR(A, B - 1, C) % C) % C
    return (y + C) % C