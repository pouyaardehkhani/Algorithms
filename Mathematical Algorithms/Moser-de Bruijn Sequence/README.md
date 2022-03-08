# Moser-de Bruijn Sequence
The Moser-de Bruijn sequence is the sequence obtained by adding up the distinct powers of the number 4 (For example, 1, 4, 16, 64, etc). 

It is observed that the terms of the sequence follow the recurrence relation :

```
1) S(2 * n) = 4 * S(n)
2) S(2 * n + 1) = 4 * S(n) + 1
with S(0) = 0 and S(1) = 1
```

It may be noted here that any number which is the sum of non-distinct powers of 4 is not a part of the sequence

Thus, any number which is not a power of 4 and is present in the sequence must be the sum of the distinct powers of 4. 

This is a Dynamic Programming Implementation. 
