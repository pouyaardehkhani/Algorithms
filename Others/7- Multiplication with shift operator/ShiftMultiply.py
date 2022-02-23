def multiply(n, m):
    ans = 0
    count = 0
    while m:
        # check for set bit and left
        # shift n, count times
        if m % 2 == 1:
            ans += n << count

        # increment of place value (count)
        count += 1
        m = int(m / 2)

    return ans