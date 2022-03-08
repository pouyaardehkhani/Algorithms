# Function to calculate padovan number P(n)
def pad(n):
    # 0th ,1st and 2nd number of the series are 1
    pPrevPrev, pPrev, pCurr, pNext = 1, 1, 1, 1
    # Find n'th Padovan number using recursive formula.
    for i in range(3, n + 1):
        pNext = pPrevPrev + pPrev
        pPrevPrev = pPrev
        pPrev = pCurr
        pCurr = pNext
    return pNext