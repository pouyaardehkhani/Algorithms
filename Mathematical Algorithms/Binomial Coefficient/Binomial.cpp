int BCDPUtil(int n, int k, int** dp) {
    // If value in lookup table then return
    if (dp[n][k] != -1) //    
        return dp[n][k];

    // store value in a table before return
    if (k == 0) {
        dp[n][k] = 1;
        return dp[n][k];
    }

    // store value in table before return
    if (k == n) {
        dp[n][k] = 1;
        return dp[n][k];
    }

    // save value in lookup table before return
    dp[n][k] = BCDPUtil(n - 1, k - 1, dp) + BCDPUtil(n - 1, k, dp);
    return dp[n][k];
}

int BCDP(int n, int k) {
    int **dp; // make a temporary lookup table
    dp = new int *[n + 1];

    // loop to create table dynamically
    for (int i = 0; i < (n + 1); i++) {
        dp[i] = new int[k + 1];
    }

    // nested loop to initialise the table with -1
    for (int i = 0; i < (n + 1); i++) {
        for (int j = 0; j < (k + 1); j++) {
            dp[i][j] = -1;
        }
    }

    return BCDPUtil(n, k, dp);
}

int BCM(int n, int r) {

    if (r > n)
        return 0;
    long long int m = 1000000007;
    long long int* inv =new long long int[r+1] {0};
    inv[0] = 1;
    if (r + 1 >= 2)
        inv[1] = 1;

    // Getting the modular inversion
    // for all the numbers
    // from 2 to r with respect to m
    // here m = 1000000007
    for (int i = 2; i <= r; i++) {
        inv[i] = m - (m / i) * inv[m % i] % m;
    }

    int ans = 1;

    // for 1/(r!) part
    for (int i = 2; i <= r; i++) {
        ans = ((ans % m) * (inv[i] % m)) % m;
    }

    // for (n)*(n-1)*(n-2)*...*(n-r+1) part
    for (int i = n; i >= (n - r + 1); i--) {
        ans = ((ans % m) * (i % m)) % m;
    }
    return ans;
}