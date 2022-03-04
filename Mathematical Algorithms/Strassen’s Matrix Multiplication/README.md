# Strassen’s Matrix Multiplication
Strassen’s algorithm is used for the multiplication of Square Matrices that is the order of matrices should be  (N x N).  Strassen’s Algorithm is based on the divide and conquer technique. In simpler terms, it is used for matrix multiplication. Strassen’s method of matrix multiplication is a typical divide and conquer algorithm.

```
Step 1: Take three matrices to suppose A, B, C where C is the resultant matrix and  A and B are Matrix which is to be multiplied using Strassen’s Method.

Step 2: Divide A, B, C Matrix into four (n/2)×(n/2) matrices and take the first part of each as shown below

Step 3: Use the below formulas for solving part 1 of the matrix

	M1:=(A1+A3)×(B1+B2)
	M2:=(A2+A4)×(B3+B4)
	M3:=(A1−A4)×(B1+A4)
	M4:=A1×(B2−B4)
	M5:=(A3+A4)×(B1)
	M6:=(A1+A2)×(B4)
	M7:=A4×(B3−B1)

	Then,

	P:=M2+M3−M6−M7
	Q:=M4+M6
	R:=M5+M7
	S:=M1−M3−M4−M5
	
Step 4: After Solving the first part, compute the second, third, and fourth, and as well as final output, a multiplied matrix is generated as a result as shown in the above image.

Step 5: Print the resultant matrix.
```
**Time complexity** is **O(NLog7)** which is approximately **O(N^2.8074)**.

