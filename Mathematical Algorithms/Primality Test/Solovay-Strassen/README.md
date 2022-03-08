# Solovay-Strassen
Given a number n, check if it is prime or not.

The Solovay–Strassen primality test is a probabilistic test to determine if a number is composite or probably prime.

### Background:

#### Legendre Symbol:
This symbol is defined as a pair of integers a and p such that p is prime. It is denoted by (a/p) and calculated as: 

```
      = 0    if a%p = 0
(a/p) = 1    if there exists an integer k such that k2 = a(mod p)
      = -1   otherwise.
```

Euler proved that: 

```
(a/p) = a^((p-1)/2) %p Condition (i)
```

#### Jacobian Symbol:
This symbol is a generalization of the Legendre Symbol, where p is replaced by n where n is

```
n = p1k1 * .. * pnkn
```

, then the Jacobian symbol is defined as: 

```
(a/n) = ((a/p1)^k1) * ((a/p2)^k2) *.....* ((a/pn)^kn)
```

If n is taken as a prime number, then the Jacobian is equal to the Legendre symbol. These symbols have certain properties – 

1. (a/n) = 0 if gcd(a,n) != 1, Hence (0/n) = 0. This is because if gcd(a,n) != 1, then there must be some prime pi such that pi divides both a and n. In that case (a/pi) = 0 [by definition of the Legendre Symbol]. 
2. (ab/n) = (a/n) * (b/n). It can be easily derived from the fact (ab/p) = (a/p)(b/p) (here (a/p) is the Legendry Symbol). 
3. If a is even, then (a/n) = (2/n)*((a/2)/n). It can be shown that: 
		```
		      = 1 if n = 1 ( mod 8 ) or n = 7 ( mod 8 )
		(2/n) = -1 if n = 3 ( mod 8 ) or n = 5 ( mod 8 )
			  = 0 otherwise
		```
4. (a/n) = (n/a) * (-1)^((a - 1)(n - 1) / 4)  if a and n are both odd.

### Algorithm:
We select a number n to test for its primality and a random number a which lies in the range of [2, n-1] and compute its Jacobian (a/n), if n is a prime number, then the Jacobian will be equal to the Legendre and it will satisfy the condition (i) given by Euler. If it does not satisfy the given condition, then n is composite and the program will stop. Just like every other Probabilistic Primality Test, its accuracy is also directly proportional to the number of iterations. So we ran the test for several iterations to get more accurate results.

```
Algorithm for Jacobian:
	Step 1    //base cases omitted
	Step 2     if a>n then
	Step 3         return (a mod n)/n
	Step 4     else
	Step 5         return (-1)((a - 1)/2)((n - 1)/2)(a/n)
	Step 6     endif


Algorithm for Solovay-Strassen:
	Step 1    Pick a random element a < n
	Step 2    if gcd(a, n) > 1 then
	Step 3        return COMPOSITE
	Step 4    end if
	Step 5    Compute a(n - 1)/2 using repeated squaring and (a/n) using Jacobian algorithm.
	Step 6    if (a/n) not equal to a(n - 1)/2 then
	Step 7        return composite
	Step 8    else
	Step 9        return prime
	Step 10   endif
```

***Accuracy: It is possible for the algorithm to return an incorrect answer. If the input n is indeed prime, then the output will always probably be correctly prime. However, if the input n is composite, then it is possible for the output to probably be incorrect prime. The number n is then called an Euler-Jacobi pseudoprime.***