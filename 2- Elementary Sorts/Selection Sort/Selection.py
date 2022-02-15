class Selection:
    @staticmethod
    def Sort(iterable):
        for i in range(0, len(iterable)):
            min = i
            for j in range(i+1, len(iterable)):
                if iterable[j] < iterable[min]:
                    min = j
            iterable[i] , iterable[min] = iterable[min] , iterable[i]