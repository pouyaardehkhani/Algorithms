# Euclidean algorithms (Basic and Extended)
GCD of two numbers is the largest number that divides both of them. A simple way to find GCD is to factorize both numbers and multiply common prime factors.

### Basic Euclidean Algorithm for GCD 
**The algorithm is based on the below facts.*** 

* If we subtract a smaller number from a larger (we reduce a larger number), GCD doesn’t change. So if we keep subtracting repeatedly the larger of two, we end up with GCD.
* Now instead of subtraction, if we divide the smaller number, the algorithm stops when we find remainder 0.

**Time Complexity: O(Log max(a, b))**

### Extended Euclidean Algorithm: 
Extended Euclidean algorithm also finds integer coefficients x and y such that: 

```
  ax + by = gcd(a, b) 
```

The extended Euclidean algorithm updates results of gcd(a, b) using the results calculated by recursive call gcd(b%a, a). Let values of x and y calculated by the recursive call be x1 and y1. x and y are updated using the below expressions. 

```
x = y1 - [b/a] * x1
y = x1
```