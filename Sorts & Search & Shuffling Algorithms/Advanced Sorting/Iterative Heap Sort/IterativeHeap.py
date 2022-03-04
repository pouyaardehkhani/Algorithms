class IterativeHeap:
    @staticmethod
    def __buildMaxHeap(arr, n):
        for i in range(n):
            if arr[i] > arr[int((i - 1) / 2)]:
                j = i
                while arr[j] > arr[int((j - 1) / 2)]:
                    (arr[j], arr[int((j - 1) / 2)]) = (arr[int((j - 1) / 2)], arr[j])
                    j = int((j - 1) / 2)

    @staticmethod
    def Sort(arr, n):
        IterativeHeap.__buildMaxHeap(arr, n)
        for i in range(n - 1, 0, -1):
            arr[0], arr[i] = arr[i], arr[0]
            j, index = 0, 0
            while True:
                index = 2 * j + 1
                if (index < (i - 1) and
                        arr[index] < arr[index + 1]):
                    index += 1
                if index < i and arr[j] < arr[index]:
                    arr[j], arr[index] = arr[index], arr[j]
                j = index
                if index >= i:
                    break