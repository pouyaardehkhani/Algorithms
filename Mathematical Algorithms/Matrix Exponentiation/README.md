# Matrix Exponentiation
This is one of the **most used techniques** in **competitive programming.**

We can find n’th Fibonacci Number in **O(Log n)** time using Matrix Exponentiation.

```
For solving the matrix exponentiation we are assuming a
linear recurrence equation like below:

F(n) = a*F(n-1) + b*F(n-2) + c*F(n-3)   for n >= 3 
                                 . . . . . Equation (1)
where a, b and c are constants. 

For this recurrence relation, it depends on three previous values. 
Now we will try to represent Equation (1) in terms of the matrix. 

[First Matrix] = [Second matrix] * [Third Matrix]
| F(n)   |     =   Matrix 'C'    *  | F(n-1) |
| F(n-1) |                          | F(n-2) |
| F(n-2) |                          | F(n-3) |
 
Dimension of the first matrix is 3 x 1 . 
Dimension of the third matrix is also 3 x 1. 

So the dimension of the second matrix must be 3 x 3 
[For multiplication rule to be satisfied.]

Now we need to fill the Matrix 'C'. 

So according to our equation. 
F(n) = a*F(n-1) + b*F(n-2) + c*F(n-3)
F(n-1) = F(n-1)
F(n-2) = F(n-2)

C = [a b c
     1 0 0
     0 1 0]

Now the relation between matrix becomes : 
[First Matrix]  [Second matrix]       [Third Matrix]
| F(n)   |  =  | a b c |  *           | F(n-1) |
| F(n-1) |     | 1 0 0 |              | F(n-2) |
| F(n-2) |     | 0 1 0 |              | F(n-3) |

Lets assume the initial values for this case :- 
F(0) = 0
F(1) = 1
F(2) = 1

So, we need to get F(n) in terms of these values.

So, for n = 3 Equation (1) changes to 
| F(3) |  =  | a b c |  *           | F(2) |
| F(2) |     | 1 0 0 |              | F(1) |
| F(1) |     | 0 1 0 |              | F(0) |

Now similarly for n = 4 
| F(4) |  =  | a b c |  *           | F(3) |
| F(3) |     | 1 0 0 |              | F(2) |
| F(2) |     | 0 1 0 |              | F(1) |

             - - - -  2 times - - -
| F(4) |  =  | a b c |  * | a b c | *       | F(2) |
| F(3) |     | 1 0 0 |    | 1 0 0 |         | F(1) |
| F(2) |     | 0 1 0 |    | 0 1 0 |         | F(0) |


So for n, the Equation (1) changes to 

                - - - - - - - - n -2 times - - - -  -       
| F(n)   |  =  | a b c | * | a b c | * ... * | a b c | * | F(2) |
| F(n-1) |     | 1 0 0 |   | 1 0 0 |         | 1 0 0 |   | F(1) |
| F(n-2) |     | 0 1 0 |   | 0 1 0 |         | 0 1 0 |   | F(0) |


| F(n)   |  =  [ | a b c | ] ^ (n-2)   *  | F(2) |
| F(n-1) |     [ | 1 0 0 | ]              | F(1) |
| F(n-2) |     [ | 0 1 0 | ]              | F(0) |
```

So we can simply multiply our Second matrix n-2 times and then multiply it with the third matrix to get the result. Multiplication can be done in (log n) time using Divide and Conquer algorithm for power

```
n'th term,
    F(n) = F(n-1) + F(n-2) + F(n-3), n >= 3
Base Cases :
    F(0) = 0, F(1) = 1, F(2) = 1
```
	
We can find n’th term using following : 
 
```
Putting a = 1, b = 1 and c = 1 in above formula

| F(n)   |  =  [ | 1 1 1 | ] ^ (n-2)   *  | F(2) |
| F(n-1) |     [ | 1 0 0 | ]              | F(1) |
| F(n-2) |     [ | 0 1 0 | ]              | F(0) |
```