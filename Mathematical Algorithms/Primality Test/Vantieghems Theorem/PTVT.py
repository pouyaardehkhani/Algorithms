def checkVantieghemsTheorem(limit):
    prod = 1
    for n in range(2, limit):
        # Check if above condition is satisfied
        if n == 2:
            print(2, "is prime")
        if (((prod - n) % ((1 << n) - 1)) == 0):
            print(n, "is prime")
        # Product of previous powers of 2
        prod *= ((1 << n) - 1)