import math


def modInverse(b, m):
    g = math.gcd(b, m)
    if g != 1:
        # print("Inverse doesn't exist")
        return -1
    else:
        # If b and m are relatively prime,
        # then modulo inverse is b^(m-2) mode m
        return pow(b, m - 2, m)


def modDivide(a, b, m):
    a = a % m
    inv = modInverse(b, m)
    if inv == -1:
        print("Division not defined")
    else:
        print("Result of Division is ", (inv * a) % m)