# Smith Number
Given a number n, the task is to find out whether this number is smith or not. 

A Smith Number is a composite number whose sum of digits is equal to the sum of digits in its prime factorization.

The idea is first find all prime numbers below a limit using **Sieve of Sundaram** (This is especially useful when we want to check multiple numbers for Smith). Now for every input to be checked for Smith, we go through all prime factors of it and find sum of digits of every prime factor. We also find sum of digits in given number. Finally we compare two sums. If they are same, we return true.

