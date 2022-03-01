def power(x, y, p):
    res = 1  # Initialize result
    x = x % p

    # Update x if it is more than
    # or equal to p
    while y > 0:

        # If y is odd, multiply
        # x with result
        if y & 1:
            res = (res * x) % p

        # y must be even now
        y = y >> 1  # y = y/2
        x = (x * x) % p
    return res


def squareRootExists(n, p):
    # Check for Euler's criterion that is
    # [n ^ ((p-1)/2)] % p is 1 or not.
    if power(n, (int)((p - 1) / 2), p) == 1:
        return True
    return False