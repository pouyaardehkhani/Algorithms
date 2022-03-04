class Comb:
    @staticmethod
    def getNextGap(gap):
        gap = (gap * 10) // 13
        if gap < 1:
            return 1
        return gap

    @staticmethod
    def combSort(arr):
        n = len(arr)
        gap = n
        swapped = True
        while gap != 1 or swapped == 1:
            gap = Comb.getNextGap(gap)
            swapped = False
            for i in range(0, n - gap):
                if arr[i] > arr[i + gap]:
                    arr[i], arr[i + gap] = arr[i + gap], arr[i]
                    swapped = True