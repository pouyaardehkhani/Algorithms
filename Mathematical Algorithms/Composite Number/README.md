# Composite Number
A composite number is a positive integer that is not prime. In other words, it has a positive divisor other than one or itself. First few composite numbers are 4, 6, 8, 9, 10, 12, 14, 15, 16, 18, 20, ……… 

### Optimized School Method 
We can do following optimizations: 

1. Instead of checking till n, we can check till √n because a larger factor of n must be a multiple of smaller factor that has been already checked.
2. The algorithm can be improved further by observing that all primes are of the form 6k ± 1, with the exception of 2 and 3. This is because all integers can be expressed as (6k + i) for some integer k and for i = -1, 0, 1, 2, 3, or 4; 2 divides (6k + 0), (6k + 2), (6k + 4); and 3 divides (6k + 3). So a more efficient method is to test if n is divisible by 2 or 3, then to check through all the numbers of form 6k ± 1.
