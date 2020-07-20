public class QuickUnion {
    private int[] id;
    private int[] sz;

    public QuickUnion(int N) {
        id = new int[N];
        for(int p=0; p<N; p++) {
            id[p] = p;
        }

        sz = new int[N];
        for(int i=0; i<N; i++) {
            sz[i] = 0;
        }
    }

    private int root(int p) {
        while(p != id[p]) {
            id[p] = id[id[p]];
            p = id[p];
        }
        return p;
    }

    public boolean connected(int p, int q) {
        return root(p) == root(q);
    }

    public void union(int p, int q) {
        int i = root(p);
        int j = root(q);
        if (i == j) return;
        if (sz[i] < sz[j]) {
            id[i] = j;
            sz[j] += sz[i];
        }
        else {
            id[j] = i;
            sz[i] += sz[j];
        }
    }
}
