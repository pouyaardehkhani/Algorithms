import sys


class MatrixChainMultiplication:
    dp = [[-1 for i in range(100)] for j in range(100)]

    @staticmethod
    def __matrixChainMemoised(p, i, j):
        if (i == j):
            return 0
        if MatrixChainMultiplication.dp[i][j] != -1:
            return MatrixChainMultiplication.dp[i][j]
        MatrixChainMultiplication.dp[i][j] = sys.maxsize
        for k in range(i, j):
            MatrixChainMultiplication.dp[i][j] = min(MatrixChainMultiplication.dp[i][j],
                                                     MatrixChainMultiplication.__matrixChainMemoised(p, i,
                                                                                                     k) + MatrixChainMultiplication.__matrixChainMemoised(
                                                         p, k + 1, j) + p[i - 1] * p[k] * p[j])
        return MatrixChainMultiplication.dp[i][j]

    @staticmethod
    def MatrixChainOrderMemoised(p, n):
        i = 1
        j = n - 1
        return MatrixChainMultiplication.__matrixChainMemoised(p, i, j)

    maxint = int(1e9 + 7)

    @staticmethod
    def MatrixChainOrderTabulation(p, n):
        m = [[0 for x in range(n)] for x in range(n)]
        for i in range(1, n):
            m[i][i] = 0
        for L in range(2, n):
            for i in range(1, n - L + 1):
                j = i + L - 1
                m[i][j] = MatrixChainMultiplication.maxint
                for k in range(i, j):
                    q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]
                    if q < m[i][j]:
                        m[i][j] = q

        return m[1][n - 1]

    # Optimized Version
    @staticmethod
    def MatrixChainOrderOptimized(p, n):
        dp = [[0 for i in range(n)]
              for i in range(n)]
        for i in range(1, n):
            dp[i][i] = 0
        for L in range(1, n - 1):
            for i in range(n - L):
                dp[i][i + L] = min(dp[i + 1][i + L] +
                                   p[i - 1] * p[i] * p[i + L],
                                   dp[i][i + L - 1] +
                                   p[i - 1] * p[i + L - 1] * p[i + L])
        return dp[1][n - 1]
