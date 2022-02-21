#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
class BinaryInsertion {
private:
    template<typename T>
    static int IterativeBS(vector<T> a, T item, int low, int high){
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (item == a[mid])
                return mid + 1;
            else if (item > a[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }
        return low;
    }

    template<typename T>
    static int RecursiveBS(vector<T> a, T item, int low, int high){
        if (high <= low)
            return (item > a[low]) ?
                   (low + 1) : low;

        int mid = (low + high) / 2;

        if (item == a[mid])
            return mid + 1;

        if (item > a[mid])
            return RecursiveBS(a, item, mid + 1, high);
        return RecursiveBS(a, item, low, mid - 1);
    }
public:
    template<typename T>
    static void Sort(vector<T> &a) {
        int i, loc, j, k, selected;
        for (i = 1; i < a.size(); ++i) {
            j = i - 1;
            selected = a[i];
            loc = IterativeBS(a, selected, 0, j);
            while (j >= loc) {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = selected;
        }
    }
};