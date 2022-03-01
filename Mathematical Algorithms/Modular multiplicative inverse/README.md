# Modular multiplicative inverse
Given two integers ‘a’ and ‘m‘, find modular multiplicative inverse of ‘a’ under modulo ‘m’.
The modular multiplicative inverse is an integer ‘x’ such that. 

**a x =~ 1 (mod m)**

The value of x should be in { 1, 2, … m-1}, i.e., in the range of integer modulo m. ( Note that x cannot be 0 as a*0 mod m will never be 1 )

The multiplicative inverse of “a modulo m” exists if and only if a and m are relatively prime (i.e., if gcd(a, m) = 1).

### Efficient Approach:

#### Method 1 (Naive):
A Naive method is to try all numbers from 1 to m. For every number x, check if (a*x)%m is 1. 

**Time Complexity: O(m)**

#### Method 2 ( Works when m and a are coprime or gcd(a,m)=1 ):
The idea is to use Extended Euclidean algorithms that takes two integers ‘a’ and ‘b’, finds their gcd and also find ‘x’ and ‘y’ such that 

```
ax + by = gcd(a, b)
```

To find multiplicative inverse of ‘a’ under ‘m’, we put b = m in above formula. Since we know that a and m are relatively prime, we can put value of gcd as 1.

```
ax + my = 1
```

If we take modulo m on both sides, we get

```
ax + my =~ 1 (mod m)
```

We can remove the second term on left side as ‘my (mod m)’ would always be 0 for an integer y. 

```
ax =~ 1 (mod m)
```

So the ‘x’ that we can find using Extended Euclid Algorithm is the multiplicative inverse of ‘a’

***Time Complexity: O(log m)**

#### Method 3 (Works when m is prime):
If we know m is prime, then we can also use Fermats’s little theorem to find the inverse. 

**Time Complexity: O(log m)**

### Examples : 
```
Input:  a = 3, m = 11
Output: 4
Since (4*3) mod 11 = 1, 4 is modulo inverse of 3(under 11).
One might think, 15 also as a valid output as "(15*3) mod 11" 
is also 1, but 15 is not in ring {1, 2, ... 10}, so not 
valid.

Input:  a = 10, m = 17
Output: 12
Since (10*12) mod 17 = 1, 12 is modulo inverse of 10(under 17).
```