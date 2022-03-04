#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
class Stooge {
public:
    template<typename T>
    static void Sort(vector<T> &it, int low, int high) {
        if (low >= high)
            return;
        if (it[low] > it[high])
            swap(it[low], it[high]);
        if (high - low + 1 > 2) {
            int t = (high - low + 1) / 3;
            Sort(it, low, high - t);
            Sort(it, low + t, high);
            Sort(it, low, high - t);
        }
    }
};