#include <vector>
using namespace std;

class Shell{
public:
    template <typename T>
    static void Sort(vector<T> &it){
        for (int h = it.size()/2; h > 0; h /= 2)
        {
            for (int i = h; i < it.size(); i += 1)
            {
                T temp = it[i];
                int j;
                for (j = i; j >= h && it[j - h]>temp; j -= h)
                    it[j] = it[j - h];
                it[j] = temp;
            }
        }
    }
};

