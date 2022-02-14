class QUPC:
    def __init__(self, size):
        self.id = [i for i in range(0, size)]
        self.size = size

    def root(self, i):
        while i != self.id[i]:
            self.id[i] = self.id[self.id[i]]
            i = self.id[i]
        return i

    def connected(self, p, q):
        return self.root(p) == self.root(q)

    def union(self, p, q):
        i = self.root(p)
        j = self.root(q)
        self.id[i] = j

    def count(self):
        return self.size
