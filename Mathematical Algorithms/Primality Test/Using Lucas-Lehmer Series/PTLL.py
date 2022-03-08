# Function to check whether (2^p - 1) is prime or not.
def isPrime(p):
    # generate the number
    checkNumber = 2 ** p - 1
    # First number of the series
    nextval = 4 % checkNumber
    # Generate the rest (p-2) terms of the series
    for i in range(1, p - 1):
        nextval = (nextval * nextval - 2) % checkNumber
    # now if the (p-1) the term is 0 return true else false.
    if (nextval == 0):
        return True
    else:
        return False