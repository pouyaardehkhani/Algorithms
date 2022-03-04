#include <iostream>
#include <vector>
using namespace std;

class QuickFindUF {
public:
    int size;
    vector<int> id;

    QuickFindUF(int N) {
        id = vector<int>(N);
        size = N;
        for (int i = 0; i < N; i++)
            id[i] = i;
    }

    bool connected(int p, int q) { return id[p] == id[q]; }

    void Union(
    int p,
    int q
    ){
        int pid = id[p];
        int qid = id[q];
        for (int i = 0; i < size; i++)
            if (id[i] == pid) id[i] = qid;
    }
};
