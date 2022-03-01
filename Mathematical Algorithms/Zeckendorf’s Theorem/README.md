# Zeckendorf’s Theorem
Zeckendorf’s theorem states that every positive integer can be written uniquely as a sum of distinct non-neighbouring Fibonacci numbers. Two Fibonacci numbers are neighbours if they one come after other in Fibonacci Sequence (0, 1, 1, 2, 3, 5, ..). For example, 3 and 5 are neighbours, but 2 and 5 are not.

Given a number, find a representation of number as sum of non-consecutive Fibonacci numbers.

***The idea is to use Greedy Algorithm.***

```
1) Let n be input number

2) While n >= 0
     a) Find the greatest Fibonacci Number smaller than n.
        Let this number be 'f'.  Print 'f'
     b) n = n - f 
```

**Time Complexity:  O(N*LogN)**