#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
class Jump{
public:
    template <typename T>
    static int Search(vector<T> it, int key, int n){
        int step = sqrt(n);
        int prev = 0;
        while (it[min(step, n) - 1] < key)
        {
            prev = step;
            step += sqrt(n);
            if (prev >= n)
                return -1;
        }
        while (it[prev] < key)
        {
            prev++;
            if (prev == min(step, n))
                return -1;
        }
        if (it[prev] == key)
            return prev;

        return -1;
    }
};