int countDyckPaths(unsigned int n) {
    // Compute value of 2nCn
    int res = 1;
    for (int i = 0; i < n; ++i) {
        res *= (2 * n - i);
        res /= (i + 1);
    }

    // return 2nCn/(n+1)
    return res / (n + 1);
}