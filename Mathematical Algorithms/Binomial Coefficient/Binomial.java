import java.util.Vector;

public class Binomial {
    static int BCDPUtil(int n, int k, Vector<Integer>[] dp) {
        // If value in lookup table
        // then return
        if (dp[n].get(k) != -1)
            return dp[n].get(k);
        // store value in a table
        // before return
        if (k == 0) {
            dp[n].add(k, 1);
            return dp[n].get(k);
        }
        // store value in table
        // before return
        if (k == n) {
            dp[n].add(k, 1);
            return dp[n].get(k);
        }
        // save value in lookup table
        // before return
        dp[n].add(k, BCDPUtil(n - 1, k - 1, dp) + BCDPUtil(n - 1, k, dp));
        return dp[n].get(k);
    }

    static int BCDP(int n, int k) {
        // Make a temporary lookup table
        Vector<Integer>[] dp = new Vector[n + 1];
        // Loop to create table dynamically
        for (int i = 0; i < (n + 1); i++) {
            dp[i] = new Vector<Integer>();
            for (int j = 0; j <= k; j++)
                dp[i].add(-1);
        }
        return BCDPUtil(n, k, dp);
    }

    static int BCM(int n, int r) {
        if (r > n)
            return 0;
        long m = 1000000007;
        long inv[] = new long[r + 1];
        inv[0] = 1;
        if (r + 1 >= 2)
            inv[1] = 1;
        // Getting the modular inversion
        // for all the numbers
        // from 2 to r with respect to m
        // here m = 1000000007
        for (int i = 2; i <= r; i++) {
            inv[i] = m - (m / i) * inv[(int) (m % i)] % m;
        }
        int ans = 1;
        // for 1/(r!) part
        for (int i = 2; i <= r; i++) {
            ans = (int) (((ans % m) * (inv[i] % m)) % m);
        }
        // for (n)*(n-1)*(n-2)*...*(n-r+1) part
        for (int i = n; i >= (n - r + 1); i--) {
            ans = (int) (((ans % m) * (i % m)) % m);
        }
        return ans;
    }
}
