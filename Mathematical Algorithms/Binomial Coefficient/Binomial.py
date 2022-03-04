def BCDPUtil(n, k, dp):
    # If value in lookup table then return
    if dp[n][k] != -1:
        return dp[n][k]
    # Store value in a table before return
    if k == 0:
        dp[n][k] = 1
        return dp[n][k]
    # Store value in table before return
    if k == n:
        dp[n][k] = 1
        return dp[n][k]
    # Save value in lookup table before return
    dp[n][k] = (BCDPUtil(n - 1, k - 1, dp) + BCDPUtil(n - 1, k, dp))

    return dp[n][k]


def BCDP(n, k):
    # Make a temporary lookup table
    dp = [[-1 for y in range(k + 1)]
          for x in range(n + 1)]
    return BCDPUtil(n, k, dp)


def BCM(n, r):
    if r > n:
        return 0
    m = 1000000007
    inv = [0 for i in range(r + 1)]
    inv[0] = 1
    if r + 1 >= 2:
        inv[1] = 1
    # Getting the modular inversion
    # for all the numbers
    # from 2 to r with respect to m
    # here m = 1000000007
    for i in range(2, r + 1):
        inv[i] = m - (m // i) * inv[m % i] % m
    ans = 1
    # for 1/(r!) part
    for i in range(2, r + 1):
        ans = ((ans % m) * (inv[i] % m)) % m
    # for (n)*(n-1)*(n-2)*...*(n-r+1) part
    for i in range(n, n - r, -1):
        ans = ((ans % m) * (i % m)) % m
    return ans