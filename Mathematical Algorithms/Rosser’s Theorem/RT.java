import java.util.Vector;

public class RT {
    static Vector<Integer> prime = new Vector<Integer>();

    // Sieve of Eratosthenes
    static void sieve() {
        // prime sieve to generate prime numbers efficiently
        int n = 10000;
        boolean[] isprime = new boolean[n + 2];
        for (int i = 0; i < n; i++)
            isprime[i] = true;
        isprime[0] = false;
        isprime[1] = false;
        for (int i = 2; i <= n; i++) {
            if (isprime[i]) {
                for (int j = i * i; j <= n; j += i)
                    isprime[j] = false;
            }
        }
        // store primes in prime[] vector
        for (int i = 0; i <= n; i++)
            if (isprime[i])
                prime.add(i);
    }

    // Verifies ROSSER'S THEOREM for all numbers smaller than n.
    static void verifyRosser(int n) {
        System.out.println("ROSSER'S THEOREM: nth prime number > n * (ln n)");
        for (int i = 0; i < n; i++)
            if (prime.get(i) > (i + 1) * Math.log(i + 1)) {
                System.out.println("For n = " + (i + 1)
                        + ", nth prime number = "
                        + prime.get(i) + "\n\t"
                        + prime.get(i) + " > " + (i + 1)
                        + " * ln(" + (i + 1) + ")");
            }
    }
}
