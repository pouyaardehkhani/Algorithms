# Mersenne Prime
Mersenne Prime is a prime number that is one less than a power of two. In other words, any prime is Mersenne Prime if it is of the form 2k-1 where k is an integer greater than or equal to 2. First few Mersenne Primes are 3, 7, 31 and 127.

The idea is to generate all the primes less than or equal to the given number n using Sieve of Eratosthenes. Once we have generated all such primes, we iterate through all numbers of the form 2k-1 and check if they are primes or not.


