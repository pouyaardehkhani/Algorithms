import java.util.Random;

public class PollardsRho {
    /* Function to calculate (base^exponent)%modulus */
    static long modular_pow(long base, int exponent, long modulus) {
        /* initialize result */
        long result = 1;

        while (exponent > 0) {
            /* if y is odd, multiply base with result */
            if (exponent % 2 == 1)
                result = (result * base) % modulus;

            /* exponent = exponent/2 */
            exponent = exponent >> 1;

            /* base = base * base */
            base = (base * base) % modulus;
        }
        return result;
    }

    /* method to return prime divisor for n */
    static long PollardRho(long n) {
        /* initialize random seed */
        Random rand = new Random();

        /* no prime divisor for 1 */
        if (n == 1) return n;

        /* even number means one of the divisors is 2 */
        if (n % 2 == 0) return 2;

        /* we will pick from the range [2, N) */
        long x = (long) (rand.nextLong() % (n - 2)) + 2;
        long y = x;

        /* the constant in f(x).
         * Algorithm can be re-run with a different c
         * if it throws failure for a composite. */
        long c = (long) (rand.nextLong()) % (n - 1) + 1;

        /* Initialize candidate divisor (or result) */
        long d = 1L;

    /* until the prime factor isn't obtained.
       If n is prime, return n */
        while (d == 1) {
            /* Tortoise Move: x(i+1) = f(x(i)) */
            x = (modular_pow(x, 2, n) + c + n) % n;

            /* Hare Move: y(i+1) = f(f(y(i))) */
            y = (modular_pow(y, 2, n) + c + n) % n;
            y = (modular_pow(y, 2, n) + c + n) % n;

            /* check gcd of |x-y| and n */
            d = __gcd(Math.abs(x - y), n);

            /* retry if the algorithm fails to find prime factor
             * with chosen x and c */
            if (d == n) return PollardRho(n);
        }

        return d;
    }

    // Recursive function to return gcd of a and b
    static long __gcd(long a, long b) {
        return b == 0 ? a : __gcd(b, a % b);
    }
}
