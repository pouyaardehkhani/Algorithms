#include <algorithm>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#define RANGE 255
class CountingSort {
public:
    static void countSort(char arr[]) {
        char output[strlen(arr)];
        int count[RANGE + 1], i;
        memset(count, 0, sizeof(count));
        for (i = 0; arr[i]; ++i)
            ++count[arr[i]];
        for (i = 1; i <= RANGE; ++i)
            count[i] += count[i - 1];
        for (i = 0; arr[i]; ++i) {
            output[count[arr[i]] - 1] = arr[i];
            --count[arr[i]];
        }
        for (i = 0; arr[i]; ++i)
            arr[i] = output[i];
    }
    static void countSort(vector<int>& arr){
        int max = *max_element(arr.begin(), arr.end());
        int min = *min_element(arr.begin(), arr.end());
        int range = max - min + 1;

        vector<int> count(range), output(arr.size());
        for (int i = 0; i < arr.size(); i++)
            count[arr[i] - min]++;

        for (int i = 1; i < count.size(); i++)
            count[i] += count[i - 1];

        for (int i = arr.size() - 1; i >= 0; i--) {
            output[count[arr[i] - min] - 1] = arr[i];
            count[arr[i] - min]--;
        }

        for (int i = 0; i < arr.size(); i++)
            arr[i] = output[i];
    }
};