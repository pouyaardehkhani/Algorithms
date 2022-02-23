def NaiveModInverse(a, m):
    for x in range(1, m):
        if ((a % m) * (x % m)) % m == 1:
            return x
    return -1


def EAModInverse(a, m):
    m0 = m
    y = 0
    x = 1
    if m == 1:
        return 0
    while a > 1:
        q = a // m
        t = m
        m = a % m
        a = t
        t = y
        y = x - q * y
        x = t
    if x < 0:
        x = x + m0
    return x


def PrimeModInverse(a, m):
    g = gcd(a, m)
    if g != 1:
        print("Inverse doesn't exist")
    else:
        print("Modular multiplicative inverse is ",
              power(a, m - 2, m))


def power(x, y, m):
    if y == 0:
        return 1
    p = power(x, y // 2, m) % m
    p = (p * p) % m
    if y % 2 == 0:
        return p
    else:
        return (x * p) % m


def gcd(a, b):
    if a == 0:
        return b

    return gcd(b % a, a)