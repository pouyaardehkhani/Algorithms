# Miller–Rabin
Given a number n, check if it is prime or not.

This method is a probabilistic method ( like Fermat), but it is generally preferred over Fermat’s method.

### Algorithm:
```
// It returns false if n is composite and returns true if n
// is probably prime.  k is an input parameter that determines
// accuracy level. Higher value of k indicates more accuracy.
bool isPrime(int n, int k)
1) Handle base cases for n < 3
2) If n is even, return false.
3) Find an odd number d such that n-1 can be written as d*2r. 
   Note that since n is odd, (n-1) must be even and r must be 
   greater than 0.
4) Do following k times
     if (millerTest(n, d) == false)
          return false
5) Return true.

// This function is called for all k trials. It returns 
// false if n is composite and returns true if n is probably
// prime.  
// d is an odd number such that d*2r = n-1 for some r>=1
bool millerTest(int n, int d)
1) Pick a random number 'a' in range [2, n-2]
2) Compute: x = pow(a, d) % n
3) If x == 1 or x == n-1, return true.

// Below loop mainly runs 'r-1' times.
4) Do following while d doesn't become n-1.
     a) x = (x*x) % n.
     b) If (x == 1) return false.
     c) If (x == n-1) return true. 
```
