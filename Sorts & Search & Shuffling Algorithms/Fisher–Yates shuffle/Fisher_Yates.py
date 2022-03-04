from random import randint


class Fisher_Yates:
    @staticmethod
    def Shuffle(iterable):
        for i in range(len(iterable) - 1, 0, -1):
            r = randint(0, i + 1)
            iterable[i], iterable[r] = iterable[r], iterable[i]
