#include <iostream>
#include <vector>
using namespace std;

class WQUPC {
public:
    int size;
    vector<int> id;
    vector<int> sz;

    WQUPC(int N) {
        id = vector<int>(N);
        sz = vector<int>(N);
        size = N;
        for (int i = 0; i < N; i++) {
            id[i] = i;
            sz[i] = 1;
        }
    }

    int root(int i){
        while (i != id[i]) {
            id[i] = id[id[i]];
            i = id[i];
        }
        return i;
    }

    bool connected(int p, int q) { return root(p) == root(q); }

    void Union(
            int p,
            int q
    ){
        int i = root(p);
        int j = root(q);
        if (i ==j) return;
        if (sz[i] < sz[j]){
            id[i] = j;
            sz[j] += sz[i];
        } else{
            id[j] = i;
            sz[i] += sz[j];
        }
    }
};

