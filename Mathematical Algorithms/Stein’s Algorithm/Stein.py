def gcd(a, b):
    # GCD(0, b) == b; GCD(a, 0) == a,
    # GCD(0, 0) == 0
    if a == 0:
        return b
    if b == 0:
        return a
    # Finding K, where K is the
    # greatest power of 2 that
    # divides both a and b.
    k = 0
    while ((a | b) & 1) == 0:
        a = a >> 1
        b = b >> 1
        k = k + 1
    # Dividing a by 2 until a becomes odd
    while (a & 1) == 0:
        a = a >> 1
    # From here on, 'a' is always odd.
    while b != 0:
        # If b is even, remove all
        # factor of 2 in b
        while (b & 1) == 0:
            b = b >> 1
        # Now a and b are both odd. Swap if
        # necessary so a <= b, then set
        # b = b - a (which is even).
        if a > b:
            # Swap u and v.
            temp = a
            a = b
            b = temp
        b = (b - a)
    # restore common factors of 2
    return a << k