/* Iterative Function to calculate (x^y)%p in O(log y) */
int exponentModI(long long x, unsigned int y, int p) {
    int res = 1;
    x = x % p;
    if (x == 0) return 0;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

// Recursive C++ program to compute modular power
int exponentModR(int A, int B, int C) {
    if (A == 0)
        return 0;
    if (B == 0)
        return 1;
    long y;
    if (B % 2 == 0) {
        y = exponentModR(A, B / 2, C);
        y = (y * y) % C;
    }
    else {
        y = A % C;
        y = (y * exponentModR(A, B - 1, C) % C) % C;
    }
    return (int) ((y + C) % C);
}