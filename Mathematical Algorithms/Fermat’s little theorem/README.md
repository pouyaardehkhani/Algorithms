# Fermat’s little theorem
Fermat’s little theorem states that if p is a prime number, then for any integer a, the number a^p – a is an integer multiple of p. 

```
Here p is a prime number 
a^p ≡ a (mod p).
```

#### Special Case:
If a is not divisible by p, Fermat’s little theorem is equivalent to the statement that a^(p-1) -1 is an integer multiple of p. 

```
a^(p-1) ≡ 1 (mod p) 
OR 
a^(p-1) % p = 1 
Here a is not divisible by p. 
```

### Use of Fermat’s little theorem
If we know m is prime, then we can also use Fermat’s little theorem to find the inverse.

```
 a^(m-1) ≡ 1 (mod m) 
```

If we multiply both sides with a-1, we get

```
  a^(-1) ≡ a^(m-2) (mod m) 
```