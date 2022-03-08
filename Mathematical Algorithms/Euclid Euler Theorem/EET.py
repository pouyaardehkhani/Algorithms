def isprime(n):
    i = 2
    # check whether a number is prime or not
    while i * i <= n:
        if n % i == 0:
            return False
        i += 1
    return False


def isperfect(n):  # perfect numbers
    # check is n is perfect sum of divisors except the number itself = number
    s = -n
    i = 1
    while i * i <= n:
        # is i is a divisor of n
        if n % i == 0:
            factor1 = i
            factor2 = n // i
            s += factor1 + factor2
            # here i*i == n
            if factor1 == factor2:
                s -= i
        i += 1
    return n == s