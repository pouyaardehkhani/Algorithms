#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
class Bucket {
public:
    template<typename T>
    static void Sort(vector<T> &it, int n) {
        vector<float> b[n];

        // 2) Put array elements
        // in different buckets
        for (int i = 0; i < n; i++) {
            int bi = n * it[i]; // Index in bucket
            b[bi].push_back(it[i]);
        }

        // 3) Sort individual buckets
        for (int i = 0; i < n; i++)
            sort(b[i].begin(), b[i].end());

        // 4) Concatenate all buckets into arr[]
        int index = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < b[i].size(); j++)
                it[index++] = b[i][j];
    }
};