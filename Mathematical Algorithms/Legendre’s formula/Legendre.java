public class Legendre {
    static int Largestpower(int n, int p) {
        // Initialize result
        int ans = 0;

        // Calculate x = n/p + n/(p^2) + n/(p^3) + ....
        while (n > 0) {
            n /= p;
            ans += n;
        }
        return ans;
    }
}
