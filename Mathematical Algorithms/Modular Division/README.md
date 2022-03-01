# Modular Division
Given three positive numbers a, b and m. Compute a/b under modulo m. The task is basically to find a number c such that (b * c) % m = a % m.

```
The task is to compute a/b under modulo m.
1) First check if inverse of b under modulo m exists or not. 
    a) If inverse doesn't exists (GCD of b and m is not 1), 
          print "Division not defined"
    b) Else return  "(inverse * a) % m" 
```