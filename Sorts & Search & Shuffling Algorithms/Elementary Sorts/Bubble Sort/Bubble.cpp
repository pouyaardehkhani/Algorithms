#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
class Bubble {
private:
    template<typename T>
    static void swap(T *xp, T *yp)
    {
        T temp = *xp;
        *xp = *yp;
        *yp = temp;
    }
public:
    template<typename T>
    static void Sort(vector<T> &it) {
        int i, j;
        bool swapped;
        for (i = 0; i < it.size()-1; i++)
        {
            swapped = false;
            for (j = 0; j < it.size()-i-1; j++)
            {
                if (it[j] > it[j+1])
                {
                    swap(&it[j], &it[j+1]);
                    swapped = true;
                }
            }
            if (swapped == false)
                break;
        }
    }
};