# Using Lucas-Lehmer Series
Lucas-Lehmer series which is used to check the primality of prime numbers of the form 2p – 1 where p is an integer.

### what is the relation with prime numbers of this Lucas-Lehmer series? 
1. First thing is that we can only check the primality of those numbers which we can represent as, x = (2^p – 1) where p is an integer. 
2. Now we have to find out the (p-1)th term of Lucas-Lehmer series. 
3. If this term is a multiple of x, then x is a prime number. 
4. When x is large, i.e. p is large then we may find difficulties to find out the (p-1)th term of the series.

Rather what we can do:
 
1. Start calculating Lucas-Lehmer series from 0th term and rather storing the whole term only store the s[i]%x (i.e. term modulo x). 
2. Compute the next number of this modified series using the previous term. s[i] = (s[i-1]^2 – 2)%x. 
3. Compute up to (p-1)th term. 
4. If the (p-1)th term is 0 then x is prime, otherwise not. Hence, s[p-1] has to be 0 to be x = (2^p – 1) prime.


