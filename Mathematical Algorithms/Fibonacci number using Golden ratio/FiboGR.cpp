#include <cmath>

double PHI = 1.6180339;

int f[6] = { 0, 1, 1, 2, 3, 5 };

int fib (int n) {
    // Fibonacci numbers for n < 6
    if (n < 6)
        return f[n];

    // Else start counting from
    // 5th term
    int t = 5, fn = 5;

    while (t < n) {
        fn = round(fn * PHI);
        t++;
    }

    return fn;
}