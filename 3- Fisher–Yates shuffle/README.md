# Fisher–Yates shuffle Algorithm
**Fisher–Yates shuffle Algorithm** works in **O(n)** time complexity. The assumption here is, we are given a function rand() that generates random number in **O(1)** time. 

The idea is to start from the last element, swap it with a randomly selected element from the whole array (including last). Now consider the array from 0 to n-2 (size reduced by 1), and repeat the process till we hit the first element. 

**Time Complexity: O(n), assuming that the function rand() takes O(1) time.**