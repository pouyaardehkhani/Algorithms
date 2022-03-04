class Interpolation:
    @staticmethod
    def Search(iterable, low, high, key):
        if low <= high and iterable[low] <= key <= iterable[high]:
            pos = low + ((high - low) // (iterable[high] - iterable[low]) *
                         (key - iterable[low]))
            if iterable[pos] == key:
                return pos
            if iterable[pos] < key:
                return Interpolation.Search(iterable, pos + 1, high, key)
            if iterable[pos] > key:
                return Interpolation.Search(iterable, low, pos - 1, key)
        return -1