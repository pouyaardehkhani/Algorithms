#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
class Interpolation{
public:
    static int Search(vector<int> it, int low, int high, int key){
        int pos;
        if (low <= high && key >= it[low] && key <= it[high]) {
            pos = low
                  + (((double)(high - low) / (it[high] - it[low]))
                     * (key - it[low]));
            if (it[pos] == key)
                return pos;
            if (it[pos] < key)
                return Interpolation::Search(it, pos + 1, high, key);
            if (it[pos] > key)
                return Interpolation::Search(it, low, pos - 1, key);
        }
        return -1;
    }
};
