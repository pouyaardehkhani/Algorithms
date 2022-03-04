class Insertion:
    @staticmethod
    def Sort(iterable):
        for i in range(1, len(iterable)):
            key = iterable[i]
            j = i - 1
            while j >= 0 and key < iterable[j]:
                iterable[j + 1] = iterable[j]
                j -= 1
            iterable[j + 1] = key