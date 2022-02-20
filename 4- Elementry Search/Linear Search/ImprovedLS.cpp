#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
class ImprovedLS{
public:
    template <typename T>
    static int Search(vector<T> it, int key){
        int left = 0;
        int length = it.size();
        int position = -1;
        int right = length - 1;

        for(left = 0; left <= right;){
            if (it[left] == key){
                position = left;
                return position;
            }
            if (it[right] == key){
                position = right;
                return position;
            }
            left++;
            right--;
        }

        return -1;
    }
};


