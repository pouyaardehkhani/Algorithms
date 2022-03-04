#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
class Quick {
private:
    template<typename T>
    static void swap(T* a, T* b){
        T t = *a;
        *a = *b;
        *b = t;
    }
    template <typename T>
    static int partition (vector<T> arr, int low, int high){
        T pivot = arr[high];
        int i = (low - 1);
        for (int j = low; j <= high - 1; j++){
            if (arr[j] < pivot){
                swap(&arr[i], &arr[j]);
            }
        }
        swap(&arr[i + 1], &arr[high]);
        return (i + 1);
    }

public:
    template <typename T>
    void quickSort(vector<T> arr, int low, int high){
        if (low < high){
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }
};
