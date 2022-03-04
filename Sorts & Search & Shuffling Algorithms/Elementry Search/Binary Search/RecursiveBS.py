class RecursiveBS:
    @staticmethod
    def Search(iterable, first_index, last_index, key):
        if last_index >= first_index:
            mid = first_index + (last_index - first_index) // 2
            if iterable[mid] == key:
                return mid
            elif iterable[mid] > key:
                return RecursiveBS.Search(iterable, first_index, mid - 1, key)
            else:
                return RecursiveBS.Search(iterable, mid + 1, last_index, key)
        else:
            return -1
