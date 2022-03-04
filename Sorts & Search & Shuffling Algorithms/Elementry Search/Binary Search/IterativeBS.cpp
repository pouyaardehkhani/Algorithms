#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
class IterativeBS{
public:
    template <typename T>
    static int Search(vector<T> it, int first_index, int last_index, T key){
        while (first_index <= last_index) {
            int m = first_index + (last_index - first_index) / 2;
            if (it[m] == key)
                return m;
            if (it[m] < key)
                first_index = m + 1;
            else
                last_index = m - 1;
        }
        return -1;
        }
};


