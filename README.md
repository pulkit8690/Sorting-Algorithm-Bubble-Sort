# Bubble-Sort

The bubble sort algorithm is a simple sorting algorithm that repeatedly steps through a list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the list is sorted.

Here's the step-by-step explanation of the bubble sort algorithm:

1. Start with an unsorted list of elements.
2. Compare the first element with the second element. If the first element is greater than the second element, swap them.
3. Move to the next pair of elements (second and third) and compare them. Again, swap if necessary.
4. Continue this process, comparing and swapping adjacent elements, until you reach the end of the list. By the end of the first iteration, the largest element will be in its correct position at the end of the list.
5. Repeat steps 2-4 for the remaining unsorted portion of the list (excluding the last element, as it is already sorted).
6. Continue these iterations until the entire list is sorted.


The time complexity of the bubble sort algorithm is O(n^2), where n is the size of the array. This means that the time it takes to sort the array increases quadratically with the number of elements. In the worst case, where the array is sorted in reverse order, bubble sort needs to make (n-1) passes and perform (n-1), (n-2), (n-3), ..., 1 comparisons in each pass, resulting in a total of (n-1) + (n-2) + (n-3) + ... + 1 = n(n-1)/2 comparisons. Since the time complexity focuses on the dominant term, the O(n^2) notation is used.

The space complexity of bubble sort is O(1), which means it uses a constant amount of additional space. Bubble sort only requires a few variables for swapping elements and keeping track of the sorting process. The amount of memory used does not increase with the size of the input array.

It's worth noting that bubble sort is not considered an efficient sorting algorithm for large datasets due to its quadratic time complexity. There are other sorting algorithms, such as quicksort or mergesort, that offer better average and worst-case time complexities.
