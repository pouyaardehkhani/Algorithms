class RecursiveTernary:
    @staticmethod
    def Search(low, high, key, Iterable):
        if high >= low:
            mid1 = low + (high - low) // 3
            mid2 = high - (high - low) // 3
            if Iterable[mid1] == key:
                return mid1
            if Iterable[mid2] == key:
                return mid2
            if key < Iterable[mid1]:
                return RecursiveTernary.Search(low, mid1 - 1, key, Iterable)
            elif key > Iterable[mid2]:
                return RecursiveTernary.Search(mid2 + 1, high, key, Iterable)
            else:
                return RecursiveTernary.Search(mid1 + 1, mid2 - 1, key, Iterable)
        return -1