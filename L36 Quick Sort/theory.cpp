/*
Time complexity
best case O(nlogn)
avg case O(nlogn)
worst case O(n^2)

Space complexity O(n)
*/

/*
No, QuickSort is not stable by nature.

A sorting algorithm is considered stable if the relative order of equivalent elements 
(elements with the same value) is preserved after sorting. In other words, if you have 
two elements with the same value, a stable sorting algorithm will ensure that their original
 order is maintained in the sorted output.
*/

/*
Yes, QuickSort is an in-place sorting algorithm, meaning it doesn't require additional memory 
proportional to the input size apart from a small amount of auxiliary stack space used for 
recursion in its typical implementation.
*/

/*
Advantages of Quick Sort:
It is a divide-and-conquer algorithm that makes it easier to solve problems.
It is efficient on large data sets.
It has a low overhead, as it only requires a small amount of memory to function.
Disadvantages of Quick Sort:
It has a worst-case time complexity of O(N2), which occurs when the pivot is chosen poorly.
It is not a good choice for small data sets.
  It is not a stable sort, meaning that if two elements have the same key, their relative order 
  will not be preserved in the sorted output in case of quick sort, because here we are swapping 
  elements according to the pivot’s position (without considering their original positions)
*/