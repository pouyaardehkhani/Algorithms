class Shell:
    @staticmethod
    def Sort(iterable):
        h = len(iterable) // 2
        while h > 0:
            i = 0
            j = h
            while j < len(iterable):
                if iterable[i] > iterable[j]:
                    iterable[i], iterable[j] = iterable[j], iterable[i]
                i += 1
                j += 1
                k = i
                while k - h > -1:
                    if iterable[k - h] > iterable[k]:
                        iterable[k - h], iterable[k] = iterable[k], iterable[k - h]
                    k -= 1
            h //= 2