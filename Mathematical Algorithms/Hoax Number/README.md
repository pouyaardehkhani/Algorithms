# Hoax Number
Given a number ‘n’, check whether it is a hoax number or not. 

A Hoax Number is defined as a composite number, whose sum of digits is equal to the sum of digits of its distinct prime factors. It may be noted here that, 1 is not considered a prime number, hence it is not included in the sum of digits of distinct prime factors.

The definition of Hoax numbers bears close resemblance with the definition of Smith Numbers. In fact, some of the Hoax numbers are also Smith numbers. It is apparent that those hoax numbers that do not have repeated factors in their prime decomposition, i.e square free number are also eligible Smith numbers.

### Implementation 
```
1) First generate all distinct prime factors of the number ‘n’. 
2) If the ‘n’ is not a prime number, find the sum of digits of the factors obtained in step 1. 
3) Find the sum of digits of ‘n’. 
4) Check if the sums obtained in steps 2 and 3 are equal or not. 
5) If the sums are equal, ‘n’ is a hoax number. 
```