# Sorting Algorithms

## Quick Sort

It is basically using the parrtition and divide and conquer method

Quick sort is mainly based on the pivot and the partitions

## Algorithm

- Select the pivot in the given array
  - Pivot can be choosen
    - Random number
    - Median of the array
    - Last element of the array
    - First elemment of the array
- Quick sort the left side of the pivot
- Quick sort the right side of the array

Time complexity

-

### Best case : <br>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; When the pivot is chosen as median of the array means when our array gets divided into two almost equal subarrays at each partition.
Then , <br>T(N) = T(n/2) + T(n/2) + O(n) [element taking time to swap]<br>
T(N) = 2T(n/2) + O(n) <br>
T(N) = O(nlogn)

Therefore , the best case complexity of Quick sort algorithm is O(nlogn)

### Average case : <br>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
When pivot is at random position . Then ,
the average time complexity remains O(nlogn).

### Worst case : <br>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
If the Pivot is largest or smallest element of the array and the other side of the partition is empty . <br>
k -> largest/smallest side of the arrary <br>
T(N) = T(k) + T(n-k-1) + O(n) <br>
T(N) = T(n-1) - O(n) <br>
T(N) = O(n^2)

Therefore , the worst case compllexity of the quicksort algorithm is O(n^2)

## Merge Sort

It is also using divide and conquer method

Merge sort first divides the array into equal halves and then combines them in a sorted manner.

## Algorithm

- Step 1 − If it is only one element in the list it is already sorted, return.
- Step 2 − divide the list recursively into two halves until it can no more be divided.
- Step 3 − merge the smaller lists into new list in sorted order.

Time complexity

-

Time complexity can be expressed as following recurrence relation.
T(n) = 2T(n/2) + θ(n)

### Best case : <br>

&nbsp;&nbsp;&nbsp;O(n\*log n)

### Average case : <br>

&nbsp;&nbsp;&nbsp;O(n\*log n)

### Worst case : <br>

&nbsp;&nbsp;&nbsp;O(n\*log n)

## Counter Sort

Counting sort is an algorithm for sorting a collection of objects according to keys that are small positive integers; that is, it is an integer sorting algorithm.


### Algorithm

Step 1 : Counting_Sort( array, ele ) // ele is number of elements in the array

Step 2 : max <- discover the array's biggest element

Step 3 : Create a count array of maximum + 1 size and fill it with all 0s.

for i = 0 to element

Step 4 : discover the total number of occurrences of each element and save the count in the count array at the index.

for i = 0 to max

Step 5 : Add the current(i) and previous(i-1) counts to get the cumulative sum, which you may save in the count array.

For j = ele down to 1

Step 6 : Decrement the count of each element copied by one before copying it back into the input array.
