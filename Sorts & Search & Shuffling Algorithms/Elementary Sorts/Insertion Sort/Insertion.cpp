#include <vector>
using namespace std;

class Insertion{
public:
    template <typename T>
    static void Sort(vector<T> &it){
        for(int i=1; i<it.size(); i++){
            T key = it[i];
            int j = i-1;
            while (j >= 0 && it[j] > key)
            {
                it[j + 1] = it[j];
                j = j - 1;
            }
            it[j + 1] = key;
        }
    }
};

