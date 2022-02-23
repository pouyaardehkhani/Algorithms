def ExtendedGCD(a, b):
    if a == 0:
        return b, 0, 1
    gcd, x1, y1 = ExtendedGCD(b % a, a)
    x = y1 - (b // a) * x1
    y = x1
    return gcd, x, y


def BasicGCD(a, b):
    if a == 0:
        return b
    return BasicGCD(b % a, a)