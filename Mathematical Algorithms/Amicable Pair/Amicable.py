import math


def divSum(n):
    # Sum of divisors
    result = 0

    # find all divisors
    # which divides 'num'
    for i in range(2, int(math.sqrt(n)) + 1):

        # if 'i' is
        # divisor of 'n'
        if n % i == 0:

            # if both divisors are same
            # then add it once else add
            # both
            if i == int(n / i):
                result = result + i
            else:
                result = result + (i + int(n / i))

    return result + 1


def areAmicable(x, y):
    if divSum(x) != y:
        return False

    return divSum(y) == x