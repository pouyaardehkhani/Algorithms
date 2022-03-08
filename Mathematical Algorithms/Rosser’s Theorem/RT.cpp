#include <bits/stdc++.h>
using namespace std;

#define show(x) cout << #x << " = " << x << "\n";

vector<int> prime;

// Sieve of Eratosthenes
void sieve() {
    // prime sieve to generate prime numbers efficiently
    int n = 1e5;
    vector<bool> isprime(n + 2, true);
    isprime[0] = isprime[1] = false;
    for (long long i = 2; i <= n; i++) {
        if (isprime[i]) {
            for (long long j = i * i; j <= n; j += i)
                isprime[j] = false;
        }
    }
    // store primes in prime[] vector
    for (int i = 0; i <= n; i++)
        if (isprime[i])
            prime.push_back(i);
}

// Verifies ROSSER'S THEOREM for all numbers smaller than n.
void verifyRosser(int n) {
    cout << "ROSSER'S THEOREM: nth prime "
            "number > n * (ln n)\n";
    for (int i = 0; i < n; i++)
        if (prime[i] > (i + 1) * log(i + 1)) {
            cout << "For n = " << i + 1
                 << ", nth prime number = "
                 << prime[i] << "\n\t"
                 << prime[i] << " > " << i + 1
                 << " * ln(" << i + 1 << ")\n";
        }
}