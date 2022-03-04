# Binomial Coefficient
A binomial coefficient C(n, k) can be defined as the coefficient of x^k in the expansion of (1 + x)^n.

A binomial coefficient C(n, k) also gives the number of ways, disregarding order, that k objects can be chosen from among n objects more formally, the number of k-element subsets (or k-combinations) of a n-element set.


### Techniques:

#### 2- Dynamic Programming Memoization
The idea is to create a lookup table and follow the recursive top-down approach. Before computing any value, we check if it is already in the lookup table. If yes, we return the value. Else we compute the value and store it in the lookup table. Following is the Top-down approach of dynamic programming to finding the value of the Binomial Coefficient.

**Time Complexity: O(max(n,n-k))**

**Auxiliary Space: O(n*k)**

#### 1- Modular Inversion technique

1. The general formula of nCr is ( n*(n-1)*(n-2)* … *(n-r+1) ) / (r!). We can directly use this formula to find nCr. But that will overflow out of bound. We need to find nCr mod m so that it doesn’t overflow. We can easily do it with modular arithmetic formula.

```
for the  n*(n-1)*(n-2)* ... *(n-r+1) part we can use the formula,
(a*b) mod m = ((a % m) * (b % m)) % m
```

2. and for the 1/r! part, we need to find the modular inverse of every number from 1 to r. Then use the same formula above with a modular inverse of 1 to r. We can find modular inverse in O(r) time using  the formula,

```
inv[1] = 1
inv[i] = − ⌊m/i⌋ * inv[m mod i] mod m
To use this formula, m has to be a prime.
```

**Time Complexity: O(n+k)**

**Auxiliary Space: O(k)**