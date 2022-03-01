# Dyck path
Consider a n x n grid with indexes of top left corner as (0, 0). Dyck path is a staircase walk from bottom left, i.e., (n-1, 0) to top right, i.e., (0, n-1) that lies above the diagonal cells (or cells on line from bottom left to top right).

The task is to count the number of Dyck Paths from (n-1, 0) to (0, n-1).

The number of Dyck paths from (n-1, 0) to (0, n-1) can be given by the Catalan number C(n).

```
C(n)= (2n)!/((n+1)!n!)
```