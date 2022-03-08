import math


# Sieve Of Eratosthenes
def SieveOfEratosthenes(n, prime, primesquare, a):
    for i in range(2, n + 1):
        prime[i] = True
    for i in range((n * n + 1) + 1):
        primesquare[i] = False
    # 1 is not a prime number
    prime[1] = False
    p = 2
    while p * p <= n:
        # If prime[p] is not changed, then it is a prime
        if prime[p] == True:
            # Update all multiples of p
            for i in range(p * 2, n + 1, p):
                prime[i] = False
        p += 1
    j = 0
    for p in range(2, n + 1):
        if prime[p]:
            # Storing primes in an array
            a[j] = p
            # Update value in primesquare[p*p], if p is prime.
            primesquare[p * p] = True
            j += 1


# Function to count divisors
def countDivisors(n):
    # If number is 1, then it will have only 1 as a factor. So, total factors will be 1.
    if n == 1:
        return 1
    prime = [False] * (n + 2)
    primesquare = [False] * (n * n + 3)
    # for storing primes upto n
    a = [0] * n
    # Calling SieveOfEratosthenes to store prime factors of n and to store square of prime factors of n
    SieveOfEratosthenes(n, prime, primesquare, a)
    # ans will contain total number of distinct divisors
    ans = 1
    # Loop for counting factors of n
    for i in range(0, True):
        # a[i] is not less than cube root n
        if a[i] * a[i] * a[i] > n:
            break
        # Calculating power of a[i] in n. cnt is power of prime a[i] in n.
        cnt = 1
        # if a[i] is a factor of n
        while n % a[i] == 0:
            n //= a[i]
            # incrementing power
            cnt = cnt + 1
        # Calculating number of divisors. If n = a^p * b^q then total divisors of n are (p+1)*(q+1)
        ans = ans * cnt
    # if a[i] is greater than cube root of n
    # First case
    if prime[n]:
        ans = ans * 2
    # Second case
    elif primesquare[n]:
        ans = ans * 3
    # Third case
    elif n != 1:
        ans = ans * 4
    return ans  # Total divisors


# Returns sum of all factors of n.
def sumofFactors(n):
    # Traversing through all prime factors.
    res = 1
    for i in range(2, int(math.sqrt(n)) + 1):
        count = 0
        curr_sum = 1
        curr_term = 1
        while n % i == 0:
            count += 1
            n //= i
            curr_term *= i
            curr_sum += curr_term
        res *= curr_sum
    # This condition is to handle the case when n is a prime number greater than 2.
    if n >= 2:
        res *= (1 + n)
    return res


# Check if number is Arithmetic Number or not.
def checkArithmetic(n):
    count = countDivisors(n)
    sum = sumofFactors(n)
    return sum % count == 0
