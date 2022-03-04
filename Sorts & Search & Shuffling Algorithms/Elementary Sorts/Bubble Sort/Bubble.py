class Bubble:
    @staticmethod
    def Sort(List):
        n = len(List)
        for i in range(n):
            swapped = False
            for j in range(0, n - i - 1):
                if List[j] > List[j + 1]:
                    List[j], List[j + 1] = List[j + 1], List[j]
                    swapped = True
            if not swapped:
                break
