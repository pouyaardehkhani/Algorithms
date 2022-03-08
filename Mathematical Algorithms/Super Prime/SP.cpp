#include <iostream>
using namespace std;

// Generate all prime numbers less than n.
bool SieveOfEratosthenes(int n, bool isPrime[]) {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= n; i++)
        isPrime[i] = true;
    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p] == true) {
            for (int i = p * 2; i <= n; i += p)
                isPrime[i] = false;
        }
    }
}

// Prints all super primes less than or equal to n.
void superPrimes(int n) {
    // Generating primes using Sieve
    bool isPrime[n + 1];
    SieveOfEratosthenes(n, isPrime);
    // Storing all the primes generated in a
    // an array primes[]
    int primes[n + 1], j = 0;
    for (int p = 2; p <= n; p++)
        if (isPrime[p])
            primes[j++] = p;
    // Printing all those prime numbers that occupy prime numbered position in sequence of prime numbers.
    for (int k = 0; k < j; k++)
        if (isPrime[k + 1])
            cout << primes[k] << " ";
}