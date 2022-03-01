# Modular Exponentiation (Power in Modular Arithmetic)
Given three numbers x, y and p, compute (x^y) % p. 

### Efficient Approach:
Below is the fundamental modular property that is used for efficiently computing power under modular arithmetic. 

```
(ab) mod p = ( (a mod p) (b mod p) ) mod p 
```

**Time Complexity of above solution is O(Log y).**

### Examples : 
```
Input:  x = 2, y = 3, p = 5
Output: 3
Explanation: 2^3 % 5 = 8 % 5 = 3.

Input:  x = 2, y = 5, p = 13
Output: 6
Explanation: 2^5 % 13 = 32 % 13 = 6.

Input : a = 2312 b = 3434 c = 6789
Output : 6343

Input : a = -3 b = 5 c = 89 
Output : 24
```

## Recursive Solution
The idea is based on below properties.
```
Property 1: 
	(m * n) % p has a very interesting property: 
	(m * n) % p =((m % p) * (n % p)) % p
Property 2: 
	if b is even: 
		(a ^ b) % c = ((a ^ b/2) * (a ^ b/2))%c ? this suggests divide and conquer 
	if b is odd: 
		(a ^ b) % c = (a * (a ^( b-1))%c
Property 3: 
	If we have to return the mod of a negative number x whose absolute value is less than y: 
	then (x + y) % y will do the trick
	
Note: 
Also as the product of (a ^ b/2) * (a ^ b/2) and a * (a ^( b-1) may cause overflow, hence we must be careful about those scenarios 
```