class IterativeBS:
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
