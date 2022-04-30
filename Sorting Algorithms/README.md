# Sorting Algorithms 

## Quick Sort 

It is basically using the parrtition and divide and conquer method 

Quick sort is mainly based on the pivot and the partitions 

Algorithm 
-
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