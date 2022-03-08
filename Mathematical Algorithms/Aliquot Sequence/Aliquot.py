from math import sqrt


# Function to calculate sum of all proper divisors
def getSum(n):
    summ = 0  # 1 is a proper divisor
    # Note that this loop runs till square root of n
    for i in range(1, int(sqrt(n)) + 1):
        if n % i == 0:
            # If divisors are equal, take only one of them
            if n // i == i:
                summ += i
            # Otherwise take both
            else:
                summ += i
                summ += n // i
    # calculate sum of all proper divisors only
    return summ - n


# Function to print Aliquot Sequence for an input n.
def printAliquot(n):
    # Print the first term
    print(n, end=" ")
    s = set()
    s.add(n)
    nextt = 0
    while n > 0:
        # Calculate next term from previous term
        n = getSum(n)
        if n in s:
            print("Repeats with", n)
            break
        # Print next term
        print(n, end=" ")
        s.add(n)