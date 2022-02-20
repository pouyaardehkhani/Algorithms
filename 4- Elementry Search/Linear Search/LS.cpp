#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
class LS{
public:
    template <typename T>
    static int Search(vector<T> it, int key){
        for (int i = 0; i < it.size(); ++i) {
            if (it[i]==key)
                return i;
        }
        return -1;
    }
};


