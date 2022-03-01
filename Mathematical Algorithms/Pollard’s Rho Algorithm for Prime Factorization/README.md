# Pollard’s Rho Algorithm for Prime Factorization
Given a positive integer n, and that it is composite, find a divisor of it.

Pollard’s Rho is a prime factorization algorithm, particularly fast for a large composite number with small prime factors. The Rho algorithm’s most remarkable success was the factorization of eighth Fermat number: 1238926361552897 * 93461639715357977769163558199606896584051237541638188580280321. 

The Rho algorithm was a good choice because the first prime factor is much smaller than the other one.

### Concepts used in Pollard’s Rho Algorithm: 
 
1. Two numbers x and y are said to be congruent modulo n (x = y modulo n) if 
		1. their absolute difference is an integer multiple of n, OR,
		2. each of them leaves the same remainder when divided by n.
2. The Greatest Common Divisor is the largest number which divides evenly into each of the original numbers.
3. Birthday Paradox: The probability of two persons having same birthday is unexpectedly high even for small set of people.
4. Floyd’s cycle-finding algorithm: If tortoise and hare start at same point and move in a cycle such that speed of hare is twice the speed of tortoise, then they must meet at some point.

### Algorithm: 
```
1. Start with random x and c. Take y equal to x and f(x) = x2 + c.
2. While a divisor isn’t obtained 
	1. Update x to f(x) (modulo n) [Tortoise Move]
	2. Update y to f(f(y)) (modulo n) [Hare Move]
	3. Calculate GCD of |x-y| and n
	4. If GCD is not unity 
		1. If GCD is n, repeat from step 2 with another set of x, y and c
		2. Else GCD is our answer
```

### Time Complexity analysis: 

The algorithm offers a trade-off between its running time and the probability that it finds a factor. A prime divisor can be achieved with a probability around 0.5, in O(√d) <= O(n1/4) iterations. This is a heuristic claim, and rigorous analysis of the algorithm remains open.


