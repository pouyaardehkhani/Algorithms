public class Mersenne {
    static void SieveOfEratosthenes(int n, boolean prime[]) {
        for (int i = 0; i <= n; i++)
            prime[i] = true;
        for (int p = 2; p * p <= n; p++) {
            if (prime[p] == true) {
                for (int i = p * 2; i <= n; i += p)
                    prime[i] = false;
            }
        }
    }

    // Function to generate mersenne primes lessthan or equal to n
    static void mersennePrimes(int n) {
        boolean prime[] = new boolean[n + 1];
        SieveOfEratosthenes(n, prime);
        for (int k = 2; ((1 << k) - 1) <= n; k++) {
            long num = (1 << k) - 1;
            if (prime[(int) (num)])
                System.out.print(num + " ");
        }
    }
}
