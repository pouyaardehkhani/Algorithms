# Generate all prime numbers less than n.
def SieveOfEratosthenes(n, prime):
    for i in range(0, n + 1):
        prime[i] = True
    p = 2
    while p * p <= n:
        if prime[p] == True:
            for i in range(p * 2, n + 1, p):
                prime[i] = False
        p += 1


# Function to generate mersenne primes less than or equal to n
def mersennePrimes(n):
    # Create a boolean array "prime[0..n]"
    prime = [0] * (n + 1)
    # Generating primes using Sieve
    SieveOfEratosthenes(n, prime)
    # Generate all numbers of the form 2^k - 1 and smaller than or equal to n.
    k = 2
    while ((1 << k) - 1) <= n:
        num = (1 << k) - 1
        # Checking whether number is prime and is one less then the power of 2
        if prime[num]:
            print(num, end=" ")
        k += 1
