# Segmented Sieve
Given a number n, print all primes smaller than n. For example, if the given number is 10, output 2, 3, 5, 7.

The idea of a segmented sieve is to divide the range [0..n-1] in different segments and compute primes in all segments one by one. This algorithm first uses Simple Sieve to find primes smaller than or equal to √(n). Below are steps used in Segmented Sieve.

1. Use Simple Sieve to find all primes up to the square root of ‘n’ and store these primes in an array “prime[]”. Store the found primes in an array ‘prime[]’.
2. We need all primes in the range [0..n-1]. We divide this range into different segments such that the size of every segment is at-most √n
3. Do following for every segment [low..high] 
		* Create an array mark[high-low+1]. Here we need only O(x) space where x is a number of elements in a given range.
		* Iterate through all primes found in step 1. For every prime, mark its multiples in the given range [low..high].
		
