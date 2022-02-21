#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
class Cocktail {
private:
    template<typename T>
    static void swap(T *xp, T *yp){
        T temp = *xp;
        *xp = *yp;
        *yp = temp;
    }
public:
    template<typename T>
    static void Sort(vector<T> &a) {
        bool swapped = true;
        int start = 0;
        int n = a.size();
        int end = n - 1;
        while (swapped){
            swapped = false;
            for (int i = start; i < end; ++i){
                if (a[i] > a[i + 1]) {
                    swap(&a[i], &a[i + 1]);
                    swapped = true;
                }
            }
            if (!swapped)
                break;
            swapped = false;
            --end;
            for (int i = end - 1; i >= start; --i){
                if (a[i] > a[i + 1]) {
                    swap(&a[i], &a[i + 1]);
                    swapped = true;
                }
            }
            ++start;
        }
    }
};