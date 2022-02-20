#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
class RecursiveBS{
public:
    template <typename T>
    static int Search(vector<T> it, int first_index, int last_index, T key){
        if (last_index >= first_index) {
            int mid = first_index + (last_index - first_index) / 2;
            if (it[mid] == key)
                return mid;
            if (it[mid] > key)
                return binarySearch(it, first_index, mid - 1, key);
            return binarySearch(it, mid + 1, last_index, key);
        }
        return -1;
    }
};


