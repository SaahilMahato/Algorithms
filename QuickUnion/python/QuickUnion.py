class QuickUnion:
    def __init__(self, N):
        self.id = [p for p in range(N)]
        self.sz = [0 for _ in range(N)]

    def root(self, p):
        while p != self.id[p]:
            self.id[p] = self.id[self.id[p]]
            p = self.id[p]
        return p

    def connected(self, p, q):
        return self.root(p) == self.root(q)

    def union(self, p, q):
        i = self.root(p)
        j = self.root(q)
        if i == j: return
        if self.sz[i] < self.sz[j]:
            self.id[i] = j
            self.sz[j] += self.sz[i]
        else:
            self.id[j] = i
            self.sz[i] += self.sz[j]


if __name__ == '__main__':
    arr = QuickUnion(10)
    arr.union(2,6)
    arr.union(8,7)
    arr.union(2,9)
    print(arr.connected(1,2))
    print(arr.connected(6,9))
    print(arr.connected(3,4))