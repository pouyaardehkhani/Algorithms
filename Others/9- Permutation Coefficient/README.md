# Permutation Coefficient
Permutation refers to the process of arranging all the members of a given set to form a sequence. The number of permutations on a set of n elements is given by n! , where “!” represents factorial. 

The Permutation Coefficient represented by P(n, k) is used to represent the number of ways to obtain an ordered subset having k elements from a set of n elements.

The coefficient can also be computed recursively using the below recursive formula:  

```
P(n, k) = P(n-1, k) + k* P(n-1, k-1)  
```

But we can dO it in an O(n) time and O(1) Extra Space Solution just by one simple loop.