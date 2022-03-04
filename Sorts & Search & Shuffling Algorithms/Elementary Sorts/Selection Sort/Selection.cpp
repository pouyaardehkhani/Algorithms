#include <vector>
using namespace std;

class Selection{
private:
    static void swap(int *xp, int *yp)
    {
        int temp = *xp;
        *xp = *yp;
        *yp = temp;
    }

public:
    template <typename T>
    static void Sort(vector<T> &it){
        for(int i=0; i<it.size()-1; i++){
            int min=i;
            for (int j=i+1; j<it.size(); j++) {
                if (it[j] < it[min])
                    min = j;
            }
            // Swap the found minimum element with the first element
            swap(&it[min], &it[i]);
        }
    }
};

