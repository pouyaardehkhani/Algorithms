#include <bits/stdc++.h>

using namespace std;
int dp[100][100];

int matrixChainMemoised(int* p, int i, int j) {
    if (i == j) {
        return 0;
    }
    if (dp[i][j] != -1) {
        return dp[i][j];
    }
    dp[i][j] = INT_MAX;
    for (int k = i; k < j; k++) {
        dp[i][j] = min(
                dp[i][j], matrixChainMemoised(p, i, k)
                          + matrixChainMemoised(p, k + 1, j)
                          + p[i - 1] * p[k] * p[j]);
    }
    return dp[i][j];
}

int MatrixChainOrderMemoised(int* p, int n) {
    int i = 1, j = n - 1;
    return matrixChainMemoised(p, i, j);
}

int MatrixChainOrderTabulation(int p[], int n) {
    int m[n][n];
    int i, j, k, L, q;
    for (i = 1; i < n; i++)
        m[i][i] = 0;
    for (L = 2; L < n; L++) {
        for (i = 1; i < n - L + 1; i++) {
            j = i + L - 1;
            m[i][j] = INT_MAX;
            for (k = i; k <= j - 1; k++) {
                q = m[i][k] + m[k + 1][j]
                    + p[i - 1] * p[k] * p[j];
                if (q < m[i][j])
                    m[i][j] = q;
            }
        }
    }
    return m[1][n - 1];
}

// optimized version
int MatrixChainOrderOptimized(int p[], int n) {
    int dp[n][n];
    for (int i = 1; i < n; i++)
        dp[i][i] = 0;
    for (int L = 1; L < n - 1; L++)
        for (int i = 1; i < n - L; i++)
            dp[i][i + L] = min(dp[i + 1][i + L] + p[i - 1] * p[i] * p[i + L],
                               dp[i][i + L - 1] + p[i - 1] * p[i + L - 1] * p[i + L]);
    return dp[1][n - 1];
}