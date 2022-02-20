class LS:
    @staticmethod
    def search(iterable, key):
        for i in range(0, len(iterable)):
            if iterable[i] == key:
                return i
        return -1
