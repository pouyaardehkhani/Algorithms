#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
class Comb {
private:
    template<typename T>
    static void swap(T *xp, T *yp){
        T temp = *xp;
        *xp = *yp;
        *yp = temp;
    }
    static int getNextGap(int gap){
        gap = (gap*10)/13;

        if (gap < 1)
            return 1;
        return gap;
    }
public:
    template<typename T>
    static void Sort(vector<T> &it) {
        int n=it.size();
        int gap = n;
        bool swapped = true;
        while (gap != 1 || swapped == true){
            gap = getNextGap(gap);
            swapped = false;
            for (int i=0; i<n-gap; i++){
                if (it[i] > it[i + gap]){
                    swap(&it[i], &it[i + gap]);
                    swapped = true;
                }
            }
        }
    }
};