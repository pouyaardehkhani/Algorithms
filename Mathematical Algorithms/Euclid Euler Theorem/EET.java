public class EET {
    static boolean isprime(long n) {
        // check whether a number is prime or not
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return false;
    }

    static boolean isperfect(long n){
        // check is n is perfect sum of divisors except the number itself = number
        long s = -n;
        for (long i = 1; i * i <= n; i++) {
            // is i is a divisor of n
            if (n % i == 0) {
                long factor1 = i, factor2 = n / i;
                s += factor1 + factor2;
                // here i*i == n
                if (factor1 == factor2) {
                    s -= i;
                }
            }
        }
        return (n == s);
    }
}
