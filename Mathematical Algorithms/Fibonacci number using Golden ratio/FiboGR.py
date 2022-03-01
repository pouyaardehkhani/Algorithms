PHI = 1.6180339

# Fibonacci numbers upto n = 5
f = [0, 1, 1, 2, 3, 5]


def fib(n):
    # Fibonacci numbers for n < 6
    if n < 6:
        return f[n]

    # Else start counting from
    # 5th term
    t = 5
    fn = 5

    while t < n:
        fn = round(fn * PHI)
        t += 1

    return fn