# Multiplication with shift operator
For any given two numbers n and m, you have to find n*m without using any multiplication operator.

We can solve this problem with the shift operator. The idea is based on the fact that every number can be represented in binary form. And multiplication with a number is equivalent to multiplication with powers of 2. Powers of 2 can be obtained using left shift operator.

Check for every set bit in the binary representation of m and for every set bit left shift n, count times where count if place value of the set bit of m and add that value to answer.

**Time Complexity : O(log n)**