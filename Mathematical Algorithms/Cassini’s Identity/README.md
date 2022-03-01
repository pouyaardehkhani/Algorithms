# Cassini’s Identity
Given a number N, the task is to evaluate below expression. Expected time complexity is O(1).

```
	f(n-1)*f(n+1) - f(n)*f(n)
```

Where f(n) is the n-th Fibonacci number with n >= 1. First few Fibonacci numbers are 0, 1, 1, 2, 3, 5, 8, 13, ………..i.e. (considering 0 as 0th Fibonacci number)

Although the task is simple i.e. find n-1th, nth and (n+1)-th Fibonacci numbers. Evaluate the expression and display the result. But this can be done in O(1) time using Cassini’s Identity which states that:

```
    f(n-1)*f(n+1) - f(n*n) = (-1)^n 
```
	
So, we don’t need to calculate any Fibonacci term,the only thing is to check whether n is even or odd.

How does above formula work?
The formula is based on matrix representation of Fibonacci numbers.