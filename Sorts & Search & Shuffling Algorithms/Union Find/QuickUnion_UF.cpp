#include <iostream>
#include <vector>
using namespace std;

class QuickUnion_UF {
public:
    int size;
    vector<int> id;

    QuickUnion_UF(int N) {
        id = vector<int>(N);
        size = N;
        for (int i = 0; i < N; i++)
            id[i] = i;
    }

    int root(int i){
        while (i != id[i])
            i = id[i];
        return i;
    }

    bool connected(int p, int q) { return root(p) == root(q); }

    void Union(
            int p,
            int q
    ){
        int i = root(p);
        int j = root(q);
        id[i] = j;
    }
};

