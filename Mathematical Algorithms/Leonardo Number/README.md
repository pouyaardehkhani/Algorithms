# Leonardo Number
The Leonardo numbers are a sequence of numbers given by the recurrence: 

```
L(n) = L(n-1)+L(n-2)+1, n=0 => L(n)=1, n=1 => L(n)=1
```

The first few Leonardo Numbers are 1, 1, 3, 5, 9, 15, 25, 41, 67, 109, 177, 287, 465, 753, 1219, 1973, 3193, 5167, 8361, ··· 

The Leonardo numbers are related to the Fibonacci numbers by below relation:

```
L(n)=2F(n+1)-1, n>=0
```

We will use dynamic programming for implementing the algorithm.
