# Find nth Fibonacci number using Golden ratio
Another simple way of finding nth Fibonacci number is using golden ratio as Fibonacci numbers maintain approximate golden ratio till infinite. 

### Approach: 
```
Golden ratio may give us incorrect answer. 
We can get correct result if we round up the result at each point. 

nth fibonacci number = round(n-1th Fibonacci number X golden ratio)
                fn = round(fn-1 * \varphi)

Till 4th term, the ratio is not much close to golden ratio (as 3/2 = 1.5, 2/1 = 2, …). So, we will consider from 5th term to get next fibonacci number. To find out the 9th fibonacci number f9 (n = 9) : 
 

f6 = round(f5 * \varphi) = 8
f7 = round(f6 * \varphi) = 13
f8 = round(f7 * \varphi) = 21
f9 = round(f8 * \varphi) = 34
Note: This method can calculate first 34 fibonacci numbers correctly. After that there may be difference from the correct value. 
```