#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;
class Quick3W {
private:
    static void partition(int a[], int l, int r, int& i, int& j){
        i = l - 1, j = r;
        int p = l - 1, q = r;
        int v = a[r];
        while (true) {
            while (a[++i] < v)
                ;
            while (v < a[--j])
                if (j == l)
                    break;
            if (i >= j)
                break;
            swap(a[i], a[j]);
            if (a[i] == v) {
                p++;
                swap(a[p], a[i]);
            }
            if (a[j] == v) {
                q--;
                swap(a[j], a[q]);
            }
        }
        swap(a[i], a[r]);
        j = i - 1;
        for (int k = l; k < p; k++, j--)
            swap(a[k], a[j]);
        i = i + 1;
        for (int k = r - 1; k > q; k--, i++)
            swap(a[i], a[k]);
    }

public:
    static void sort(int a[], int l, int r){
        if (r <= l)
            return;
        int i, j;
        partition(a, l, r, i, j);
        sort(a, l, j);
        sort(a, i, r);
    }
};

