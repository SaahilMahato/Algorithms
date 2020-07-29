class QuickUnion
{
    private:
        int *id;
        int *sz;

        int root(int p)
        {
            while(p != this->id[p])
            {
                this->id[p] = this->id[this->id[p]];
                p = this->id[p];
            }
            return p;
        }

    public:
        QuickUnion(int N)
        {
            this->id = new int[N];
            for(int p=0; p<N; p++)
            {
                this->id[p] = p;
            }

            this->sz = new int[N];
            for(int i=0; i<N; i++)
            {
                this->sz[i] = 0;
            }
        }

        bool connected(int p, int q)
        {
            return this->root(p) == this->root(q);
        }

        void Union(int p, int q)
        {
            int i = this->root(p);
            int j = this->root(q);
            if(i == j) return;
            if (this->sz[i] < this->sz[j]) {
                this->id[i] = j;
                this->sz[j] += this->sz[i];
            }
            else {
                this->id[j] = i;
                this->sz[i] += this->sz[j];
            }
        }
};