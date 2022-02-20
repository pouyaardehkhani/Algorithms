# Binary Search
***Binary Search Approach***: Binary Search is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted and reduce the time complexity to ***O(Log n)***. The basic steps to perform Binary Search are:

* Begin with an interval covering the whole array.
* If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. 
* Otherwise, narrow it to the upper half. 
* Repeatedly check until the value is found or the interval is empty.

***Algorithmic Paradigm: Decrease and Conquer.***
# Linear Search
A simple approach is to do a linear search:

* Start from the leftmost element of arr[] and one by one compare x with each element of arr[]
* If x matches with an element, return the index.
* If x doesn’t match with any of elements, return -1.

The **time complexity** of the above algorithm is **O(n)**. 

### Improve Linear Search Worst-Case Complexity
1. if element Found at last  O(n) to O(1)
2. It is the same as previous method because here we are performing 2 ‘if’ operations in one iteration of the loop and in previous method we performed only 1 ‘if’ operation. This makes both the time complexities same.

## Linear Search vs Binary Search
A linear search scans one item at a time, without jumping to any item .

1. The worst case complexity is  O(n), sometimes known an O(n) search
2. Time taken to search elements keep increasing as the number of elements are increased.

A binary search however, cut down your search to half as soon as you find middle of a sorted list.

1. The middle element is looked to check if it is greater than or less than the value to be searched.
2. Accordingly, search is done to either half of the given list

#### Important Differences

* Input data needs to be sorted in Binary Search and not in Linear Search
* Linear search does the sequential access whereas Binary search access data randomly.
* Time complexity of linear search -O(n) , Binary search has time complexity O(log n).
* Linear search performs equality comparisons and Binary search performs ordering comparisons

# Interpolation Search
The Interpolation Search is an improvement over **Binary Search** for instances, where the values in a sorted array are uniformly distributed. Binary Search always goes to the middle element to check. **On the other hand***, interpolation search may go to different locations according to the value of the key being searched.

```
Step1: In a loop, calculate the value of “pos” using the probe position formula. 
Step2: If it is a match, return the index of the item, and exit. 
Step3: If the item is less than arr[pos], calculate the probe position of the left sub-array. Otherwise calculate the same in the right sub-array. 
Step4: Repeat until a match is found or the sub-array reduces to zero.
```

# Jump Search
Like **Binary Search**, ***Jump Search*** is a searching algorithm for ***sorted arrays***. The basic idea is to check fewer elements (than **linear search**) by jumping ahead by fixed steps or skipping some elements in place of searching all elements.

**In the worst case, we have to do n/m jumps and if the last checked value is greater than the element to be searched for, we perform m-1 comparisons more for linear search. Therefore the total number of comparisons in the worst case will be ((n/m) + m-1). The value of the function ((n/m) + m-1) will be minimum when m = √n. Therefore, the best step size is m = √n.**

### Important points: 
* Works only sorted arrays.
* The optimal size of a block to be jumped is (√ n). This makes the time complexity of Jump Search O(√ n).
* The time complexity of Jump Search is between Linear Search ( ( O(n) ) and Binary Search ( O (Log n) ).
* Binary Search is better than Jump Search, but Jump search has an advantage that we traverse back only once (Binary Search may require up to O(Log n) jumps, consider a situation where the element to be searched is the smallest element or just bigger than the smallest). So in a system where binary search is costly, we use Jump Search.

# Exponential Search
The name of this searching algorithm may be misleading as it works in O(Log n) time. The name comes from the way it searches an element.

**Time Complexity : O(Log n)** 

```
1. Find range where element is present
2. Do Binary Search in above found range.
```

### Applications of Exponential Search: 

* Exponential Binary Search is particularly useful for unbounded searches, where size of array is infinite.
* It works better than Binary Search for bounded arrays, and also when the element to be searched is closer to the first element.

# Ternary Search
Ternary search is a **decrease(by constant) and conquer algorithm** that can be used to find an element in an array. 

It is similar to binary search where we divide the array into two parts but in this algorithm, we divide the given array into three parts and determine which has the key (searched element). We can divide the array into three parts by taking mid1 and mid2 which can be calculated as shown below. Initially, l and r will be equal to 0 and n-1 respectively, where n is the length of the array. 

```
mid1 = l + (r-l)/3 
mid2 = r – (r-l)/3 
```

***Note: Array needs to be sorted to perform ternary search on it.***

```
Steps to perform Ternary Search: 

1. First, we compare the key with the element at mid1. If found equal, we return mid1.
2. If not, then we compare the key with the element at mid2. If found equal, we return mid2.
3. If not, then we check whether the key is less than the element at mid1. If yes, then recur to the first part.
4. If not, then we check whether the key is greater than the element at mid2. If yes, then recur to the third part.
5. If not, then we recur to the second (middle) part.
```

**Time Complexity: <img src="https://render.githubusercontent.com/render/math?math=O(log_3n)">, where n is the size of the array.**

**Uses: In finding the maximum or minimum of a unimodal function.**