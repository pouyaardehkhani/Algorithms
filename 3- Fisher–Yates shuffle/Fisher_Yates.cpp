#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Fisher_Yates{
public:
    template <typename T>
    static void Shuffle(vector<T> &it){
        srand(time(NULL));
        for (int i = it.size() - 1; i > 0; i--){
            int j = rand() % (i + 1);
            T temp=it[i];
            it[i]=it[j];
            it[j]=temp;
        }
    }
};

