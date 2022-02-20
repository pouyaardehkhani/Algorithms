# Radix Sort
The idea of Radix Sort is to do digit by digit sort starting from least significant digit to most significant digit. Radix sort uses counting sort as a subroutine to sort.

### What is the running time of Radix Sort?
**Let there be d digits in input integers. Radix Sort takes O(d*(n+b)) time where b is the base for representing numbers, for example, for the decimal system, b is 10. What is the value of d? If k is the maximum possible value, then d would be <img src="https://render.githubusercontent.com/render/math?math=O(log_b(k))">. So overall time complexity is <img src="https://render.githubusercontent.com/render/math?math=O((n+b) * log_b(k))">. Which looks more than the time complexity of comparison-based sorting algorithms for a large k. Let us first limit k. Let k <= nc where c is a constant. In that case, the complexity becomes <img src="https://render.githubusercontent.com/render/math?math=O(nLog_b(n))">. But it still doesn’t beat comparison-based sorting algorithms.** 
**What if we make the value of b larger?. What should be the value of b to make the time complexity linear? If we set b as n, we get the time complexity as O(n). In other words, we can sort an array of integers with a range from 1 to nc if the numbers are represented in base n (or every digit takes <img src="https://render.githubusercontent.com/render/math?math=log_2(n)"> bits).** 

### Applications of Radix Sort : 
* In a typical computer, which is a sequential random-access machine, where the records are keyed by multiple fields radix sort is used.
* It was used in card sorting machines that had 80 columns, and in each column, the machine could punch a hole only in 12 places. The sorter was then programmed to sort the cards, depending upon which place the card had been punched. This was then used by the operator to collect the cards which had the 1st row punched, followed by the 2nd row, and so on.

