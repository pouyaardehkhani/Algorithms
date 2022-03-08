# Fermat Method
Given a number n, check if it is prime or not.

This method is a probabilistic method and is based on Fermat’s Little Theorem.

#### Fermat's Little Theorem:
```
If n is a prime number, then for every a, 1 < a < n-1,

a^(n-1) ≡ 1 (mod n)
 OR 
a^(n-1) % n = 1 
```

If a given number is prime, then this method always returns true. If the given number is composite (or non-prime), then it may return true or false, but the probability of producing incorrect results for composite is low and can be reduced by doing more iterations.

### Algorithm:
```
// Higher value of k indicates probability of correct
// results for composite inputs become higher. For prime
// inputs, result is always correct
1)  Repeat following k times:
      a) Pick a randomly in the range [2, n - 2]
      b) If gcd(a, n) ≠ 1, then return false
      c) If an-1 &nequiv; 1 (mod n), then return false
2) Return true [probably prime].
```

**Time complexity of this solution is O(k Log n).**

**Note that the above method may fail even if we increase the number of iterations (higher k). There exist some composite numbers with the property that for every a < n, gcd(a, n) = 1 and an-1 ≡ 1 (mod n). Such numbers are called Carmichael numbers. Fermat’s primality test is often used if a rapid method is needed for filtering, for example in the key generation phase of the RSA public key cryptographic algorithm.**
