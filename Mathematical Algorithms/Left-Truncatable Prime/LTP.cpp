int power(int x, unsigned int y) {
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}

// Generate all prime numbers less than n.
bool sieveOfEratosthenes(int n, bool isPrime[]) {
    // Initialize all entries of boolean array as true. A value in isPrime[i] will finally
    // be false if i is Not a prime, else true bool isPrime[n+1];
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= n; i++)
        isPrime[i] = true;
    for (int p = 2; p * p <= n; p++) {
        // If isPrime[p] is not changed, then it is a prime
        if (isPrime[p] == true) {
            // Update all multiples of p
            for (int i = p * 2; i <= n; i += p)
                isPrime[i] = false;
        }
    }
}

// Returns true if n is right-truncatable, else false
bool leftTruPrime(int n) {
    int temp = n, cnt = 0, temp1;
    // Counting number of digits in the input number and checking whether it contains 0 as digit or not.
    while (temp) {
        cnt++; // counting number of digits.
        temp1 = temp % 10; // checking whether digit is 0 or not
        if (temp1 == 0)
            return false; // if digit is 0, return false.
        temp = temp / 10;
    }
    // Generating primes using Sieve
    bool isPrime[n + 1];
    sieveOfEratosthenes(n, isPrime);
    // Checking whether the number remains prime when the leading ("left") digit is successively removed
    for (int i = cnt; i > 0; i--) {
        // Checking number by successively removing leading ("left") digit.
        int mod = power(10, i);
        if (!isPrime[n % mod]) // checking prime
            return false; // if not prime, return false
    }
    return true; // if remains prime, return true
}