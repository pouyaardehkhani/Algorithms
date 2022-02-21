class Bucket:
    @staticmethod
    def insertionSort(b):
        for i in range(1, len(b)):
            up = b[i]
            j = i - 1
            while j >= 0 and b[j] > up:
                b[j + 1] = b[j]
                j -= 1
            b[j + 1] = up
        return b

    @staticmethod
    def Sort1(x):  # without integer part
        arr = []
        slot_num = 10
        for i in range(slot_num):
            arr.append([])
        for j in x:
            index_b = int(slot_num * j)
            arr[index_b].append(j)
        for i in range(slot_num):
            arr[i] = Bucket.insertionSort(arr[i])
        k = 0
        for i in range(slot_num):
            for j in range(len(arr[i])):
                x[k] = arr[i][j]
                k += 1
        return x

    @staticmethod
    def Sort2(arr, noOfBuckets):  # with integer part
        max_ele = max(arr)
        min_ele = min(arr)
        rnge = (max_ele - min_ele) / noOfBuckets
        temp = []
        for i in range(noOfBuckets):
            temp.append([])
        for i in range(len(arr)):
            diff = (arr[i] - min_ele) / rnge - int((arr[i] - min_ele) / rnge)
        if diff == 0 and arr[i] != min_ele:
            temp[int((arr[i] - min_ele) / rnge) - 1].append(arr[i])

        else:
            temp[int((arr[i] - min_ele) / rnge)].append(arr[i])
        for i in range(len(temp)):
            if len(temp[i]) != 0:
                temp[i].sort()
        k = 0
        for lst in temp:
            if lst:
                for i in lst:
                    arr[k] = i
                    k = k + 1