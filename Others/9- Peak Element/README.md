# Peak Element
Given an array of integers. Find a peak element in it. An array element is a peak if it is NOT smaller than its neighbours. For corner elements, we need to consider only one neighbour. 

Divide and Conquer can be used to find a peak in O(Logn) time. The idea is based on the technique of Binary Search to check if the middle element is the peak element or not. If the middle element is not the peak element, then check if the element on the right side is greater than the middle element then there is always a peak element on the right side. If the element on the left side is greater than the middle element then there is always a peak element on the left side. Form a recursion and the peak element can be found in log n time. 

### Algorithm: 
```
1. Create two variables, l and r, initialize l = 0 and r = n-1
2. Iterate the steps below till l <= r, lowerbound is less than the upperbound
3. Check if the mid value or index mid = (l+r)/2, is the peak element or not, if yes then print the element and terminate.
4. Else if the element on the left side of the middle element is greater then check for peak element on the left side, i.e. update r = mid – 1
5. Else if the element on the right side of the middle element is greater then check for peak element on the right side, i.e. update l = mid + 1
```

**Time Complexity: O(Logn).**

Where n is the number of elements in the input array. In each step our search becomes half. So it can be compared to Binary search, So the time complexity is O(log n)

**Space complexity: O(1).** 

No extra space is required, so the space complexity is constant.