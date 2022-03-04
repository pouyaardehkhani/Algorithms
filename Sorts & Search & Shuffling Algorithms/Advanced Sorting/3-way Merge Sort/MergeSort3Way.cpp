#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
class MergeSort3Way {
private:
    template <typename T>
    static void merge(vector<T> gArray, int low, int mid1, int mid2, int high, vector<T> destArray)
    {
        int i = low, j = mid1, k = mid2, l = low;
        while ((i < mid1) && (j < mid2) && (k < high)){
            if(gArray[i] < gArray[j]){
                if(gArray[i] < gArray[k]){
                    destArray[l++] = gArray[i++];
                }
                else{
                    destArray[l++] = gArray[k++];
                }
            }
            else{
                if(gArray[j] < gArray[k]){
                    destArray[l++] = gArray[j++];
                }
                else{
                    destArray[l++] = gArray[k++];
                }
            }
        }
        while ((i < mid1) && (j < mid2)){
            if(gArray[i] < gArray[j]){
                destArray[l++] = gArray[i++];
            }
            else{
                destArray[l++] = gArray[j++];
            }
        }
        while ((j < mid2) && (k < high)){
            if(gArray[j] < gArray[k]){
                destArray[l++] = gArray[j++];
            }
            else{
                destArray[l++] = gArray[k++];
            }
        }
        while ((i < mid1) && (k < high)){
            if(gArray[i] < gArray[k]){
                destArray[l++] = gArray[i++];
            }
            else{
                destArray[l++] = gArray[k++];
            }
        }
        while (i < mid1)
            destArray[l++] = gArray[i++];
        while (j < mid2)
            destArray[l++] = gArray[j++];
        while (k < high)
            destArray[l++] = gArray[k++];
    }
    template <typename T>
    static void mergeSort3WayRec(vector<T> gArray, int low, int high, vector<T> destArray){
        if (high - low < 2)
            return;
        int mid1 = low + ((high - low) / 3);
        int mid2 = low + 2 * ((high - low) / 3) + 1;
        mergeSort3WayRec(destArray, low, mid1, gArray);
        mergeSort3WayRec(destArray, mid1, mid2, gArray);
        mergeSort3WayRec(destArray, mid2, high, gArray);
        merge(destArray, low, mid1, mid2, high, gArray);
    }

public:
    template <typename T>
    static void mergeSort3Way(vector<T> gArray, int n){
        if (n == 0)
            return;
        int fArray[n];
        for (int i = 0; i < n; i++)
            fArray[i] = gArray[i];
        mergeSort3WayRec(fArray, 0, n, gArray);
        for (int i = 0; i < n; i++)
            gArray[i] = fArray[i];
    }
};
