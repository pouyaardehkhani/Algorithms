def permutationCoeff(n, k):
    f = 1
    for i in range(k):  # P(n,k)=n*(n-1)*(n-2)*....(n-k-1)
        f *= (n - i)
    return f