#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
class RecursiveTernary {
public:
    template<typename T>
    static int Search(vector<T> it, int low, int high, T key) {
        if (high >= low) {
            int mid1 = low + (high - low) / 3;
            int mid2 = high - (high - low) / 3;
            if (it[mid1] == key) {
                return mid1;
            }
            if (it[mid2] == key) {
                return mid2;
            }
            if (key < it[mid1]) {
                return RecursiveTernary::Search(it, low, mid1 - 1, key);
            } else if (key > it[mid2]) {
                return RecursiveTernary::Search(it, mid2 + 1, high, key);
            } else {
                return RecursiveTernary::Search(it, mid1 + 1, mid2 - 1, key);
            }
        }
        return -1;
    }
};