class ImprovedLS:
    @staticmethod
    def search(iterable, key):
        left = 0
        length = len(iterable)
        position = -1
        right = length - 1

        for left in range(0, right, 1):
            if iterable[left] == key:
                position = left
                return position
            if iterable[right] == key:
                position = right
                return position
            left += 1
            right -= 1

        return -1
