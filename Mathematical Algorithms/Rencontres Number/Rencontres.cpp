#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int binomialCoeff(int C[][MAX], int n, int k) {
    // Calculate value of Binomial Coefficient
    // in bottom up manner
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= min(i, k); j++) {

            // Base Cases
            if (j == 0 || j == i)
                C[i][j] = 1;

                // Calculate value using previously
                // stored values
            else
                C[i][j] = C[i - 1][j - 1] +
                          C[i - 1][j];
        }
    }
}
int RencontresNumber(int C[][MAX], int n, int m) {
    int** dp = new int*[n + 1];

    for (int i = 0; i < m; i++) {
        dp[i] = new int[m + 1] {0};
    }

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (j <= i) {

                // base case
                if (i == 0 && j == 0)
                    dp[i][j] = 1;

                    // base case
                else if (i == 1 && j == 0)
                    dp[i][j] = 0;

                else if (j == 0)
                    dp[i][j] = (i - 1) * (dp[i - 1][0] + dp[i - 2][0]);
                else
                    dp[i][j] = C[i][j] * dp[i - j][0];
            }
        }
    }

    return dp[n][m];
}