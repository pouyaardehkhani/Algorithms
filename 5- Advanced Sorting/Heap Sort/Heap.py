class Heap:
    @staticmethod
    def __heapify(arr, n, i):
        largest = i
        l = 2 * i + 1
        r = 2 * i + 2
        if l < n and arr[largest] < arr[l]:
            largest = l
        if r < n and arr[largest] < arr[r]:
            largest = r
        if largest != i:
            arr[i], arr[largest] = arr[largest], arr[i]
            Heap.__heapify(arr, n, largest)

    @staticmethod
    def Sort(arr):
        n = len(arr)
        for i in range(n // 2 - 1, -1, -1):
            Heap.__heapify(arr, n, i)
        for i in range(n - 1, 0, -1):
            arr[i], arr[0] = arr[0], arr[i]
            Heap.__heapify(arr, i, 0)