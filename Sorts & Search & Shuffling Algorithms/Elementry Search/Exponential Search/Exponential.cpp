#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
class BS{
public:
    template <typename T>
    static int Search(vector<T> it, int first_index, int last_index, T key){
        while (first_index <= last_index) {
            int m = first_index + (last_index - first_index) / 2;
            if (it[m] == key)
                return m;
            if (it[m] < key)
                first_index = m + 1;
            else
                last_index = m - 1;
        }
        return -1;
    }
};

class Exponential{
public:
    template <typename T>
    static int Search(vector<T> it, int n, T key){
        if (it[0] == key)
            return 0;
        int i = 1;
        while (i < n && it[i] <= key)
            i = i*2;
        return BS::Search(it, i / 2, min(i, n - 1), key);
    }
};



