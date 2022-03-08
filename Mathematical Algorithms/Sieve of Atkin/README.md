# Sieve of Atkin
The sieve of Atkin is a modern algorithm for finding all prime numbers up to a specified integer. Compared with the ancient Sieve of Eratosthenes, which marks off multiples of primes, it does some preliminary work and then marks off multiples of squares of primes, that’s why it has a better theoretical asymptotic complexity with Complexity of (N / (log log N))

### The algorithm:  
1. Create a results list, filled with 2, 3, and 5.
2. Create a sieve list with an entry for each positive integer; all entries in this list should initially be marked non-prime.
3. For each entry number n in the sieve list, with modulo-sixty remainder r: 
		1. If r is 1, 13, 17, 29, 37, 41, 49, or 53, flip the entry for each possible solution to 4x2 + y2 = n.
		2. If r is 7, 19, 31, or 43, flip the entry for each possible solution to 3x2 + y2 = n.
		3. If r is 11, 23, 47, or 59, flip the entry for each possible solution to 3x2 – y2 = n when x > y.
		4. If r is something else, ignore it completely…
4. Start with the lowest number in the sieve list.
5. Take the next number in the sieve list, still marked prime.
6. Include the number in the results list.
7. Square the number and mark all multiples of that square as non-prime. Note that the multiples that can be factored by 2, 3, or 5 need not be marked, as these will be ignored in the final enumeration of primes.
8. Repeat steps four through seven.
