N = 1000000007


def exponentiation(bas, exp):
    t = 1
    while exp > 0:

        # for cases where exponent
        # is not an even value
        if exp % 2 != 0:
            t = (t * bas) % N

        bas = (bas * bas) % N
        exp = int(exp / 2)
    return t % N