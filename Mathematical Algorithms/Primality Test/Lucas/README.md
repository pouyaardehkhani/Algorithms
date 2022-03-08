# Lucas Test
The Lucas test is a primality test for a natural number n, it can test primality of any kind of number.

It follows from Fermat’s Little Theorem: If p is prime and a is an integer, then a^p is congruent to a (mod p )

Lucas’ Test : A positive number n is prime if there exists an integer a (1 < a < n) such that : 

```
a^(n-1) \equiv 1 (mod n)
```

And for every prime factor q of (n-1),

```
a^(({n-1})/q) \not \equiv \ 1(mod n)
```

### Algorithm:
```
lucasTest(n):
If n is even
    return composite
Else
   Find all prime factors of n-1
   for i=2 to n-1
      pick 'a' randomly in range [2, n-1]
      if a^(n-1) % n not equal 1:
          return composite
      else 
          // for all q, prime factors of (n-1)
          if a^(n-1)/q % n not equal 1 
             return prime
   Return probably prime
```

Problems Associated with Lucas’s test are : 

* Knowing all of the prime factors of n-1
* Finding an appropriate choice for a

**This method is quite complicated and inefficient as compared to other primality tests. So we only doing this on python.**
