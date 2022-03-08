import java.util.Arrays;

public class PTriplet {
    static void sieve(int n, boolean prime[]) {
        for (int p = 2; p * p <= n; p++) {
            if (prime[p] == true) {
                for (int i = p * 2; i <= n; i += p)
                    prime[i] = false;
            }
        }
    }

    // function to print prime triplets
    static void printPrimeTriplets(int n) {
        boolean prime[] = new boolean[n + 1];
        Arrays.fill(prime, true);
        sieve(n, prime);
        System.out.println("The prime triplets" + " from 1 to " + n + "are :");
        for (int i = 2; i <= n - 6; ++i) {
            // triplets of form (p, p+2, p+6)
            if (prime[i] && prime[i + 2] && prime[i + 6])
                System.out.println(i + " " + (i + 2) + " " + (i + 6));
                // triplets of form (p, p+4, p+6)
            else if (prime[i] && prime[i + 4] &&
                    prime[i + 6])
                System.out.println(i + " " + (i + 4) + " " + (i + 6));
        }
    }
}
