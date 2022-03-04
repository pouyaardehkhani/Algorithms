class Stooge:
    @staticmethod
    def Sort(List, low, high):
        if low >= high:
            return
        if List[low] > List[high]:
            t = List[low]
            List[low] = List[high]
            List[high] = t
        if high - low + 1 > 2:
            t = int((high - low + 1) / 3)
            Stooge.Sort(List, low, (high - t))
            Stooge.Sort(List, low + t, high)
            Stooge.Sort(List, low, (high - t))
