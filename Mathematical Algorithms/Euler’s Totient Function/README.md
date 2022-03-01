# Euler’s Totient Function
Euler’s Totient function Φ (n) for an input n is the count of numbers in {1, 2, 3, …, n} that are relatively prime to n, i.e., the numbers whose GCD (Greatest Common Divisor) with n is 1.

The idea is based on Euler’s product formula which states that the value of totient functions is below the product overall prime factors p of n.
The formula basically says that the value of Φ(n) is equal to n multiplied by-product of (1 – 1/p) for all prime factors p of n.

```
1) Initialize : result = n
2) Run a loop from 'p' = 2 to sqrt(n), do following for every 'p'.
     a) If p divides n, then 
           Set: result = result  * (1.0 - (1.0 / (float) p));
           Divide all occurrences of p in n.
3) Return result  
```

