# Radix Sort
The idea of Radix Sort is to do digit by digit sort starting from least significant digit to most significant digit. Radix sort uses counting sort as a subroutine to sort.

### What is the running time of Radix Sort?
**Let there be d digits in input integers. Radix Sort takes O(d*(n+b)) time where b is the base for representing numbers, for example, for the decimal system, b is 10. What is the value of d? If k is the maximum possible value, then d would be <img src="https://render.githubusercontent.com/render/math?math=O(log_b(k))">. So overall time complexity is <img src="https://render.githubusercontent.com/render/math?math=O((n+b) * log_b(k))">. Which looks more than the time complexity of comparison-based sorting algorithms for a large k. Let us first limit k. Let k <= nc where c is a constant. In that case, the complexity becomes <img src="https://render.githubusercontent.com/render/math?math=O(nLog_b(n))">. But it still doesn’t beat comparison-based sorting algorithms.** 
**What if we make the value of b larger?. What should be the value of b to make the time complexity linear? If we set b as n, we get the time complexity as O(n). In other words, we can sort an array of integers with a range from 1 to nc if the numbers are represented in base n (or every digit takes <img src="https://render.githubusercontent.com/render/math?math=log_2(n)"> bits).** 

### Applications of Radix Sort : 
* In a typical computer, which is a sequential random-access machine, where the records are keyed by multiple fields radix sort is used.
* It was used in card sorting machines that had 80 columns, and in each column, the machine could punch a hole only in 12 places. The sorter was then programmed to sort the cards, depending upon which place the card had been punched. This was then used by the operator to collect the cards which had the 1st row punched, followed by the 2nd row, and so on.
### Example:
```
Original, unsorted list:
170, 45, 75, 90, 802, 24, 2, 66

Sorting by least significant digit (1s place) gives: 
[*Notice that we keep 802 before 2, because 802 occurred 
before 2 in the original list, and similarly for pairs 
170 & 90 and 45 & 75.]

170, 90, 802, 2, 24, 45, 75, 66

Sorting by next digit (10s place) gives: 
[*Notice that 802 again comes before 2 as 802 comes before 
2 in the previous list.]

802, 2, 24, 45, 66, 170, 75, 90

Sorting by the most significant digit (100s place) gives:
2, 24, 45, 66, 75, 90, 170, 802
```

# Merge Sort
Merge Sort is a **Divide and Conquer algorithm**. It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves.

```
MergeSort(arr[], l,  r)
If r > l
     1. Find the middle point to divide the array into two halves:  
             middle m = l+ (r-l)/2
     2. Call mergeSort for first half:   
             Call mergeSort(arr, l, m)
     3. Call mergeSort for second half:
             Call mergeSort(arr, m+1, r)
     4. Merge the two halves sorted in step 2 and 3:
             Call merge(arr, l, m, r)
```

**Time Complexity:** Sorting arrays on different machines. Merge Sort is a recursive algorithm and time complexity can be expressed as following recurrence relation. 

T(n) = 2T(n/2) + θ(n)

The above recurrence can be solved either using the Recurrence Tree method or the Master method. It falls in case II of Master Method and the solution of the recurrence is θ(nLogn). Time complexity of Merge Sort is  θ(nLogn) in all 3 cases (worst, average and best) as merge sort always divides the array into two halves and takes linear time to merge two halves.

# Bottom-up Merge Sort (MergeBU)
Simple and non-recursive version of mergesort.

**Time complexity** is same as recursive, i.e., **Θ(nLogn)**. 

# 3-way Merge Sort
Merge sort involves recursively splitting the array into 2 parts, sorting and finally merging them. A variant of merge sort is called 3-way merge sort where instead of splitting the array into 2 parts we split it into 3 parts.

Merge sort recursively breaks down the arrays to subarrays of size half. Similarly, 3-way Merge sort breaks down the arrays to subarrays of size one third.

**Time Complexity:** In case of 2-way Merge sort we get the equation: T(n) = 2T(n/2) + O(n)
Similarly, in case of 3-way Merge sort we get the equation: T(n) = 3T(n/3) + O(n)

Although time complexity looks less compared to 2 way merge sort, the time taken actually may become higher because number of comparisons in merge function go higher. 

Implementation only available in java and C++.

# Quick Sort
QuickSort is a **Divide and Conquer algorithm**. It picks an element as pivot and partitions the given array around the picked pivot. There are many different versions of quickSort that pick pivot in different ways. 

1. Always pick first element as pivot.
2. Always pick last element as pivot (implemented below)
3. Pick a random element as pivot.
4. Pick median as pivot.

Pseudo Code for recursive QuickSort function: 
```
/* low  --> Starting index,  high  --> Ending index */
quickSort(arr[], low, high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[pi] is now
           at right place */
        pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Before pi
        quickSort(arr, pi + 1, high); // After pi
    }
}
```

Partition Algorithm:
```
/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
partition (arr[], low, high)
{
    // pivot (Element to be placed at right position)
    pivot = arr[high];  
 
    i = (low - 1)  // Index of smaller element and indicates the 
                   // right position of pivot found so far

    for (j = low; j <= high- 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++;    // increment index of smaller element
            swap arr[i] and arr[j]
        }
    }
    swap arr[i + 1] and arr[high])
    return (i + 1)
}
```

# Bottom-up Quick Sort (QuickBU)
Simple and non-recursive version of Quicksort.

# 3-Way QuickSort (Dutch National Flag)
The idea of 3 way Quick Sort is to process all occurrences of the pivot and is based on Dutch National Flag algorithm. 

```
In 3 Way QuickSort, an array arr[l..r] is divided in 3 parts:
a) arr[l..i] elements less than pivot.
b) arr[i+1..j-1] elements equal to pivot.
c) arr[j..r] elements greater than pivot.
```

**Time Complexity: O(N * log(N))**

# Heap Sort
Heap sort is a comparison-based sorting technique based on Binary Heap data structure. It is similar to selection sort where we first find the minimum element and place the minimum element at the beginning. We repeat the same process for the remaining elements.

### Why array based representation for Binary Heap? 
Since a Binary Heap is a Complete Binary Tree, it can be easily represented as an array and the array-based representation is space-efficient. If the parent node is stored at index I, the left child can be calculated by 2 * I + 1 and the right child by 2 * I + 2 (assuming the indexing starts at 0).

**Heap Sort Algorithm for sorting in increasing order:**
```
1. Build a max heap from the input data. 
2. At this point, the largest item is stored at the root of the heap. Replace it with the last item of the heap followed by reducing the size of heap by 1. Finally, heapify the root of the tree. 
3. Repeat step 2 while the size of the heap is greater than 1.
```

**Efficiency** –  The time required to perform Heap sort increases logarithmically while other algorithms may grow exponentially slower as the number of items to sort increases. This sorting algorithm is very efficient.

**overall time complexity of Heap Sort is O(nLogn).**
