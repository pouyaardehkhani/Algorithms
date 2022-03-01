arr = [True] * (1001)

def simpleSieve():
    # Initialize all entries of it as
    # True. A value in mark[p] will
    # finally be False if 'p' is Not
    # a prime, else True.
    k = 0

    # One by one traverse all numbers so
    # that their multiples can be marked
    # as composite.
    for p in range(2, 1001):
        if p * p > 1001:
            break

        # If p is not changed, then it is a prime
        if arr[p]:

            # Update all multiples of p
            for k in range(p, 1001, k + p):
                arr[k] = False


def find_sphene(N):
    # To store the 8 divisors
    arr1 = [0] * (8)

    # To count the number of divisor
    count = 0
    j = 0

    for i in range(1, N + 1):
        if N % i == 0 and count < 8:
            count += 1
            arr1[j] = i
            j += 1

    # Finally check if there re 8 divisor and
    # all the numbers are distinct prime no return 1
    # else return 0);
    if (count == 8 and (arr[arr1[1]] and
                        arr[arr1[2]] and arr[arr1[3]])):
        return 1;

    return 0;