class IterativeTernary:
    @staticmethod
    def Search(low, high, key, iterable):
        while high >= low:
            mid1 = low + (high - low) // 3
            mid2 = high - (high - low) // 3
            if key == iterable[mid1]:
                return mid1
            if key == mid2:
                return mid2
            if key < iterable[mid1]:
                high = mid1 - 1
            elif key > iterable[mid2]:
                low = mid2 + 1
            else:
                low = mid1 + 1
                high = mid2 - 1
        return -1