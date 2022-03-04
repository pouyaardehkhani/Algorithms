class BinaryInsertion:
    @staticmethod
    def __IterativeBS(a, item, low, high):
        while (low <= high):
            mid = low + (high - low) // 2
            if (item == a[mid]):
                return mid + 1
            elif (item > a[mid]):
                low = mid + 1
            else:
                high = mid - 1
        return low

    @staticmethod
    def __RecursiveBS(arr, val, start, end):
        if start == end:
            if arr[start] > val:
                return start
            else:
                return start + 1
        if start > end:
            return start
        mid = (start + end) // 2
        if arr[mid] < val:
            return BinaryInsertion.__RecursiveBS(arr, val, mid + 1, end)
        elif arr[mid] > val:
            return BinaryInsertion.__RecursiveBS(arr, val, start, mid - 1)
        else:
            return mid

    @staticmethod
    def Sort(a):
        for i in range(len(a)):
            j = i - 1
            selected = a[i]
            loc = BinaryInsertion.__IterativeBS(a, selected, 0, j)  # or BinaryInsertion.__RecursiveBS
            while j >= loc:
                a[j + 1] = a[j]
                j -= 1
            a[j + 1] = selected
