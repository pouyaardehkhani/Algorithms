import math

prime = []


# Sieve of Eratosthenes
def sieve():
    # prime sieve to generate prime numbers efficiently
    n = 100001
    isprime = [True] * (n + 2)
    isprime[0] = False
    isprime[1] = False
    for i in range(2, n + 1):
        if isprime[i]:
            j = i * i
            while j <= n:
                isprime[j] = False
                j += i
    # store primes in
    # prime[] vector
    for i in range(n + 1):
        if isprime[i]:
            prime.append(i)


# Verifies ROSSER'S THEOREM for all numbers smaller than n.
def verifyRosser(n):
    print("ROSSER'S THEOREM: nth", "prime number > n * (ln n)");
    for i in range(n):
        if prime[i] > int((i + 1) * math.log(i + 1)):
            print("For n =", (i + 1), ", nth prime number =",
                  prime[i], "\n\t", prime[i], " >", (i + 1),
                  "* ln(", (i + 1), ")");