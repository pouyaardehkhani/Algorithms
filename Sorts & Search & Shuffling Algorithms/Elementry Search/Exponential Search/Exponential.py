class BS:
    @staticmethod
    def Search(iterable, first_index, last_index, key):
        while first_index <= last_index:
            mid = first_index + (last_index - first_index) // 2
            if iterable[mid] == key:
                return mid
            elif iterable[mid] < key:
                first_index = mid + 1
            else:
                last_index = mid - 1
        return -1


class Exponential:
    @staticmethod
    def Search(iterable, n, key):
        if iterable[0] == key:
            return 0
        i = 1
        while i < n and iterable[i] <= key:
            i = i * 2
        return BS.Search(iterable, i // 2, min(i, n - 1), key)
