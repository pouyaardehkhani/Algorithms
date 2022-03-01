# Euler’s criterion
Given a number ‘n’ and a prime p, find if square root of n under modulo p exists or not. A number x is square root of n under modulo p if (x*x)%p = n%p.

**Time Complexity is O(p).**

Euler’s criterion states that 

```
Square root of n under modulo p exists if and only if
n^((p-1)/2) % p = 1

Here square root of n exists means is, there exist
an integer x such that (x * x) % p = 1
```

