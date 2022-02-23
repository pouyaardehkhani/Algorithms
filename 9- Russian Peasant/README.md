# Russian Peasant
Given two integers, write a function to multiply them without using multiplication operator.

```
Let the two given numbers be 'a' and 'b'
1) Initialize result 'res' as 0.
2) Do following while 'b' is greater than 0
   a) If 'b' is odd, add 'a' to 'res'
   b) Double 'a' and halve 'b'
3) Return 'res'.
```

**Time Complexity: O(log(b,2))**