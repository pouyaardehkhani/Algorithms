int pad(int n) {
    /* 0th ,1st and 2nd number of the series are 1*/
    int pPrevPrev = 1, pPrev = 1, pCurr = 1, pNext = 1;
    for (int i = 3; i <= n; i++) {
        pNext = pPrevPrev + pPrev;
        pPrevPrev = pPrev;
        pPrev = pCurr;
        pCurr = pNext;
    }
    return pNext;
}