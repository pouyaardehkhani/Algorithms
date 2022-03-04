class QuickFind_UF:
    def __init__(self, size):
        self.id = [i for i in range(0, size)]
        self.size = size

    def connected(self, p, q):
        return self.id[p] == self.id[q]

    def union(self, p, q):
        pid = self.id[p]
        qid = self.id[q]
        for i in range(0, self.size):
            if self.id[i] == pid:
                self.id[i] = qid

    def count(self):
        return self.size
