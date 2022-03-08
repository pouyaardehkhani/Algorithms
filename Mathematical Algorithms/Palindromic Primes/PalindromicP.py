# A function that returns true only if num contains one digit
def oneDigit(num):
    return 0 <= num < 10


# A recursive function to find out whether num is palindrome or not.
# Initially, dupNum contains address of a copy of num.
def isPalUtil(num, dupNum):
    if oneDigit(num):
        return num == (dupNum) % 10
    if not isPalUtil(int(num / 10), dupNum):
        return False
    dupNum = int(dupNum / 10)
    return (num % 10 == (dupNum) % 10)


# The main function that uses recursive function isPalUtil() to find out whether num is palindrome or not
def isPal(num):
    if num < 0:
        num = -num
    dupNum = num
    return isPalUtil(num, dupNum)


# Function to generate all primes and checking whether number is palindromic or not
def printPalPrimesLessThanN(n):
    prime = [True] * (n + 1)
    p = 2
    while p * p <= n:
        if prime[p]:
            for i in range(p * 2, n + 1, p):
                prime[i] = False
        p += 1
    for p in range(2, n + 1):
        if prime[p] and isPal(p):
            print(p, end=" ")