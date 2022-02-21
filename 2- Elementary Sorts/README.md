# Selection Sort
The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning.

In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.

***Time Complexity: O(n2) as there are two nested loops.***

# Insertion Sort
Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.

***Time Complexity: O(n^2)***

# Shell Sort
ShellSort is mainly a variation of Insertion Sort. In insertion sort, we move elements only one position ahead. When an element has to be moved far ahead, many movements are involved. The idea of shellSort is to allow exchange of far items. 

***Time Complexity: O(n2)***

# Bubble Sort
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.

It can be optimized by stopping the algorithm if inner loop didn’t cause any swap. 

**Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.**

**Best Case Time Complexity: O(n). Best case occurs when array is already sorted.**

**Auxiliary Space: O(1)**

**Boundary Cases: Bubble sort takes minimum time (Order of n) when elements are already sorted.**

**Sorting In Place: Yes**

**Stable: Yes**

Due to its simplicity, bubble sort is often used to introduce the concept of a sorting algorithm.
 
In **computer graphics** it is popular for its **capability to detect a very small error** (like swap of just two elements) in almost-sorted arrays and fix it with just linear complexity (2n).

# Binary Insertion Sort

We can use **binary search** to reduce the **number of comparisons** in normal insertion sort. **Binary Insertion Sort** uses binary search to find the proper location to insert the selected item at each iteration. 

In **normal insertion sort**, it takes **O(n)** comparisons (at nth iteration) in the **worst case**. We can **reduce** it to **O(log n)** by using binary search.

**Time Complexity: The algorithm as a whole still has a running worst-case running time of O(n2) because of the series of swaps required for each insertion.**

# Stooge Sort

The Stooge sort is a **recursive sorting algorithm**.

```
Step 1 : If value at index 0 is greater than
         value at last index, swap them.
Step 2:  Recursively, 
       a) Stooge sort the initial 2/3rd of the array.
       b) Stooge sort the last 2/3rd of the array.
       c) Stooge sort the initial 2/3rd again to confirm.
```

**NOTE: Always take the ceil of ((2/3)* N) for selecting elements.**

The running time complexity of stooge sort can be written as,
**T(n) = 3T(3n/2) + c(1)**

Solution of above recurrence is **O(n^(log3/log1.5)) = O(n^2.709)**, hence it is **slower** than even **bubble sort(n^2)**. 

# Bucket Sort
Bucket sort is mainly **useful** when input is **uniformly distributed over a range**.

```
bucketSort(arr[], n)
1) Create n empty buckets (Or lists).
2) Do following for every array element arr[i].
.......a) Insert arr[i] into bucket[n*array[i]]
3) Sort individual buckets using insertion sort.
4) Concatenate all sorted buckets.
```

**Time Complexity: If we assume that insertion in a bucket takes O(1) time then steps 1 and 2 of the above algorithm clearly take O(n) time. The O(1) is easily possible if we use a linked list to represent a bucket (In the following code, C++ vector is used for simplicity). Step 4 also takes O(n) time as there will be n items in all buckets.** 

**The main step to analyze is step 3. This step also takes O(n) time on average if all numbers are uniformly distributed.**

### Bucket Sort for numbers having integer part:
```
1. Find maximum element and minimum of the array
2. Calculate the range of each bucket
        range = (max - min) / n
        n is the number of buckets
3. Create n buckets of calculated range
4. Scatter the array elements to these buckets
        BucketIndex = ( arr[i] - min ) / range
5. Now sort each bucket individually
6. Gather the sorted elements from buckets to original arra
```

This implementation is available in python.

# Counting Sort
Counting sort is a sorting technique based on keys between a specific range. It works by counting the number of objects having distinct key values (kind of hashing). Then doing some arithmetic to calculate the position of each object in the output sequence.
```
For simplicity, consider the data in the range 0 to 9. 
Input data: 1, 4, 1, 2, 7, 5, 2
  1) Take a count array to store the count of each unique object.
  Index:     0  1  2  3  4  5  6  7  8  9
  Count:     0  2  2  0   1  1  0  1  0  0

  2) Modify the count array such that each element at each index 
  stores the sum of previous counts. 
  Index:     0  1  2  3  4  5  6  7  8  9
  Count:     0  2  4  4  5  6  6  7  7  7

The modified count array indicates the position of each object in 
the output sequence.

  3) Rotate the array clockwise for one time.
   Index:     0 1 2 3 4 5 6 7 8 9
   Count:     0 0 2 4 4 5 6 6 7 7
  
  4) Output each object from the input sequence followed by 
  increasing its count by 1.
  Process the input data: 1, 4, 1, 2, 7, 5, 2. Position of 1 is 0.
  Put data 1 at index 0 in output. Increase count by 1 to place 
  next data 1 at an index 1 greater than this index.
```

**Points to be noted:**
1. Counting sort is efficient if the range of input data is not significantly greater than the number of objects to be sorted. Consider the situation where the input sequence is between range 1 to 10K and the data is 10, 5, 10K, 5K. 
2. It is not a comparison based sorting. It running time complexity is O(n) with space proportional to the range of data. 
3. It is often used as a sub-routine to another sorting algorithm like radix sort. 
4. Counting sort uses a partial hashing to count the occurrence of the data object in O(1). 
5. Counting sort can be extended to work for negative inputs also.

# Pigeonhole Sort
Pigeonhole sorting is a sorting algorithm that is suitable for **sorting lists of elements where the number of elements and the number of possible key values are approximately the same**. 

It requires **O(n + Range)** time where n is number of elements in input array and ‘Range’ is number of possible values in array. 

```
1. Find minimum and maximum values in array. Let the minimum and maximum values be ‘min’ and ‘max’ respectively. Also find range as ‘max-min+1’. 
2. Set up an array of initially empty “pigeonholes” the same size as of the range.
3. Visit each element of the array and then put each element in its pigeonhole. An element arr[i] is put in hole at index arr[i] – min.
4. Start the loop all over the pigeonhole array in order and put the elements from non- empty holes back into the original array.
```

# Comb Sort
Comb Sort is mainly an **improvement** over **Bubble Sort**. Bubble sort always compares adjacent values. So all inversions are removed one by one. Comb Sort improves on Bubble Sort by using gap of size more than 1. The gap starts with a large value and shrinks by a factor of 1.3 in every iteration until it reaches the value 1. Thus Comb Sort removes more than one inversion counts with one swap and performs better than Bubble Sort.

The shrink factor has been empirically found to be **1.3**.

The worst-case complexity of this algorithm is **O(n^2)**.

the Best Case complexity is **O(nlog n)**.

# Cycle Sort
Cycle sort is an in-place sorting Algorithm, unstable sorting algorithm, a comparison sort that is theoretically optimal in terms of the total number of writes to the original array. 

* It is optimal in terms of number of memory writes. 
* It is based on the idea that array to be sorted can be divided into cycles. Cycles can be visualized as a graph. We have n nodes and an edge directed from node i to node j if the element at i-th index must be present at j-th index in the sorted array. 

**Time Complexity : O(n2)**

**This sorting algorithm is best suited for situations where memory write or swap operations are costly.**

# Cocktail Sort
Cocktail Sort is a **variation** of **Bubble sort**. 
The Bubble sort algorithm always traverses elements from left and moves the largest element to its correct position in first iteration and second largest in second iteration and so on. 
Cocktail Sort traverses through a given array in both directions alternatively. 

```
1. The first stage loops through the array from left to right, just like the Bubble Sort. During the loop, adjacent items are compared and if value on the left is greater than the value on the right, then values are swapped. At the end of first iteration, largest number will reside at the end of the array.
2. The second stage loops through the array in opposite direction- starting from the item just before the most recently sorted item, and moving back to the start of the array. Here also, adjacent items are compared and are swapped if required.
```

**Worst and Average Case Time Complexity: O(n*n).**
