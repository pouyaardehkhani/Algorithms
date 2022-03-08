#include <iostream>
using namespace std;

// Generate all prime numbers less than n.
void SieveOfEratosthenes(int n, bool prime[]) {
    for (int i = 0; i <= n; i++)
        prime[i] = true;
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * 2; i <= n; i += p)
                prime[i] = false;
        }
    }
}

// Function to generate mersenne primes less than or equal to n
void mersennePrimes(int n) {
    bool prime[n + 1];
    SieveOfEratosthenes(n, prime);
    for (int k = 2; ((1 << k) - 1) <= n; k++) {
        long long num = (1 << k) - 1;
        if (prime[num])
            cout << num << " ";
    }
}