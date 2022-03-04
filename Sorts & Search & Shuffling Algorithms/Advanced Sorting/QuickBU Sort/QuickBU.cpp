#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
class QuickBU {
private:
    template<typename T>
    static void swap(T* a, T* b){
        T t = *a;
        *a = *b;
        *b = t;
    }
    static int partition(int arr[], int l, int h){
        int x = arr[h];
        int i = (l - 1);
        for (int j = l; j <= h - 1; j++) {
            if (arr[j] <= x) {
                i++;
                swap(&arr[i], &arr[j]);
            }
        }
        swap(&arr[i + 1], &arr[h]);
        return (i + 1);
    }

public:
    static void Sort(int arr[], int l, int h){
        int stack[h - l + 1];
        int top = -1;
        stack[++top] = l;
        stack[++top] = h;
        while (top >= 0) {
            h = stack[top--];
            l = stack[top--];
            int p = partition(arr, l, h);
            if (p - 1 > l) {
                stack[++top] = l;
                stack[++top] = p - 1;
            }
            if (p + 1 < h) {
                stack[++top] = p + 1;
                stack[++top] = h;
            }
        }
    }
};

