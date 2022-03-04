# Chinese Remainder Theorem
We are given two arrays num[0..k-1] and rem[0..k-1]. In num[0..k-1], every pair is coprime (gcd for every pair is 1). We need to find minimum positive number x such that: 

```
    x % num[0]    =  rem[0], 
    x % num[1]    =  rem[1], 
    .......................
    x % num[k-1]  =  rem[k-1]
```

### Example:
```
Input:  num[] = {3, 4, 5}, rem[] = {2, 3, 1}
Output: 11
Explanation: 
11 is the smallest number such that:
  (1) When we divide it by 3, we get remainder 2. 
  (2) When we divide it by 4, we get remainder 3.
  (3) When we divide it by 5, we get remainder 1.
```

### Implementation:
The solution is based on below formula.

```
x =  ( ∑ (rem[i]*pp[i]*inv[i]) ) % prod
   Where 0 <= i <= n-1
   
rem[i] is given array of remainders

prod is product of all given numbers
prod = num[0] * num[1] * ... * num[k-1]

pp[i] is product of all divided by num[i]
pp[i] = prod / num[i]

inv[i] = Modular Multiplicative Inverse of pp[i] with respect to num[i]
```

We can use Extended Euclid based method to find inverse modulo. 

**Time Complexity : O(N*LogN)**

**Auxiliary Space : O(1)**