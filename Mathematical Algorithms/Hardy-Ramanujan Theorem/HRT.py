import math


# A function to count prime factors of a given number n
def exactPrimeFactorCount(n):
    count = 0
    if n % 2 == 0:
        count = count + 1
        while n % 2 == 0:
            n = int(n / 2)
    # n must be odd at this point. So we can skip one element (Note i = i +2)
    i = 3
    while i <= int(math.sqrt(n)):
        if n % i == 0:
            count = count + 1
            while n % i == 0:
                n = int(n / i)
        i = i + 2
    # This condition is to handle the case when n
    # is a prime number greater than 2
    if n > 2:
        count = count + 1
    return count