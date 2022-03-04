#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;
class IterativeHeap {
private:
    template<typename T>
    static void swap(T* a, T* b){
        T t = *a;
        *a = *b;
        *b = t;
    }
    template<typename T>
    static void buildMaxHeap(vector<T> arr, int n){
        for (int i = 1; i < n; i++){
            if (arr[i] > arr[(i - 1) / 2]){
                int j = i;
                while (arr[j] > arr[(j - 1) / 2]){
                    swap(&arr[j], &arr[(j - 1) / 2]);
                    j = (j - 1) / 2;
                }
            }
        }
    }

public:
    template<typename T>
    static void heapSort(vector<T> arr, int n){
        buildMaxHeap(arr, n);
        for (int i = n - 1; i > 0; i--){
            swap(arr[0], arr[i]);
            int j = 0, index;
            do{
                index = (2 * j + 1);
                if (arr[index] < arr[index + 1] && index < (i - 1))
                    index++;
                if (arr[j] < arr[index] && index < i)
                    swap(arr[j], arr[index]);
                j = index;
            } while (index < i);
        }
    }
};

