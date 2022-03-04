# Horner’s Method for Polynomial Evaluation
Given a polynomial of the form cnxn + c(n-1)x^(n-1) + c(n-2)x^(n-2) + … + c(1)x + c(0) and a value of x, find the value of polynomial for a given value of x. Here c(n), c(n-1), .. are integers (may be negative) and n is a positive integer.

**Horner’s method** can be used to evaluate polynomial in **O(n) time**.

To understand the method, let us consider the example of 2x3 – 6x2 + 2x – 1. The polynomial can be evaluated as ((2x – 6)x + 2)x – 1. The idea is to initialize result as coefficient of xn which is 2 in this case, repeatedly multiply result with x and add next coefficient to result. Finally return result.

**Auxiliary Space: O(1)**