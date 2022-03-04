import math


class Jump:
    @staticmethod
    def Search(iterable, key):
        size = len(iterable)
        step = math.sqrt(size)
        prev = 0
        while iterable[int(min(step, size) - 1)] < key:
            prev = step
            step += math.sqrt(size)
            if prev >= size:
                return -1
        while iterable[int(prev)] < key:
            prev += 1
            if prev == min(step, size):
                return -1
        if iterable[int(prev)] == key:
            return prev
        return -1
