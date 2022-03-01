def bonacciseries(n, m):
    # Assuming m > n.
    a = [0 for i in range(m)]
    a[n - 1] = 1
    a[n] = 1

    # Uses sliding window
    for i in range(n + 1, m):
        a[i] = 2 * a[i - 1] - a[i - n - 1]

    # Printing result
    for i in range(0, m):
        print(a[i], end=" ")