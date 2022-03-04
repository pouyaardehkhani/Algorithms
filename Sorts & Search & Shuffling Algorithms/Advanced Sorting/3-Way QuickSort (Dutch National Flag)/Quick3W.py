class Quick3W:
    @staticmethod
    def partition(arr, first, last, start, mid):
        pivot = arr[last]
        end = last
        while mid[0] <= end:
            if arr[mid[0]] < pivot:
                arr[mid[0]], arr[start[0]] = arr[start[0]], arr[mid[0]]
                mid[0] = mid[0] + 1
                start[0] = start[0] + 1
            elif arr[mid[0]] > pivot:
                arr[mid[0]], arr[end] = arr[end], arr[mid[0]]
                end = end - 1
            else:
                mid[0] = mid[0] + 1

    @staticmethod
    def sort(arr, first, last):
        if first >= last:
            return
        if last == first + 1:
            if arr[first] > arr[last]:
                arr[first], arr[last] = arr[last], arr[first]
                return
        start = [first]
        mid = [first]
        Quick3W.partition(arr, first, last, start, mid)
        Quick3W.sort(arr, first, start[0] - 1)
        Quick3W.sort(arr, mid[0], last)