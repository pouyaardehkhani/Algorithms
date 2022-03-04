# Rencontres Number
Given two numbers, n >= 0 and 0 <= k <= n, count the number of derangements with k fixed points.

### Examples:
```
Input : n = 3, k = 1
Output : 3
Since k = 1, one point needs to be on its
original position. So partial derangements are {1, 3, 2}, {3, 2, 1} and {2, 1, 3}
```

### Formula:
In combinatorial mathematics, the rencontres number< or D(n, k) represents count of partial derangements.

The recurrence relation to find Rencontres Number D(n, k):

```
D(0, 0) = 1 
D(0, 1) = 0 
D(n+2, 0) = (n+1) * (D(n+1, 0) + D(n, 0)) 
D(n, k) = nCk * D(n-k, 0))
```

We implement this using Dynamic Programming.
