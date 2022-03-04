#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
class IterativeTernary{
public:
    template <typename T>
    static int Search(vector<T> it, int low, int high, T key){
        while (high >= low) {
            int mid1 = low + (high - low) / 3;
            int mid2 = high - (high - low) / 3;
            if (it[mid1] == key) {
                return mid1;
            }
            if (it[mid2] == key) {
                return mid2;
            }
            if (key < it[mid1]) {
                high = mid1 - 1;
            }
            else if (key > it[mid2]) {
                low = mid2 + 1;
            }
            else {
                low = mid1 + 1;
                high = mid2 - 1;
            }
        }
        return -1;
    }
};