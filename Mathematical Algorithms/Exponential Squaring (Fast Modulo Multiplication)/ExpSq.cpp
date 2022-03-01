#define N 1000000007L; // prime modulo value

long exponentiation(long base, long exp) {
    long t = 1L;
    while (exp > 0) {

        // for cases where exponent
        // is not an even value
        if (exp % 2 != 0)
            t = (t * base) % N;

        base = (base * base) % N;
        exp /= 2;
    }
    return t % N;
}