# Bubble-Sort

The bubble sort algorithm is a simple sorting algorithm that repeatedly steps through a list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the list is sorted.

Here's the step-by-step explanation of the bubble sort algorithm:

1. Start with an unsorted list of elements.
2. Compare the first element with the second element. If the first element is greater than the second element, swap them.
3. Move to the next pair of elements (second and third) and compare them. Again, swap if necessary.
4. Continue this process, comparing and swapping adjacent elements, until you reach the end of the list. By the end of the first iteration, the largest element will be in its correct position at the end of the list.
5. Repeat steps 2-4 for the remaining unsorted portion of the list (excluding the last element, as it is already sorted).
6. Continue these iterations until the entire list is sorted.


To illustrate the process, let's consider an array: [1, 10, 7, 6, 14, 9]. We'll apply the bubble sort algorithm to this array.

Round 1:

Compare 1 with 10. Since 1 is smaller, swap them. Array: [1, 10, 7, 6, 14, 9] -> [1, 7, 10, 6, 14, 9]
Compare 10 with 7. Since 10 is greater, no swap needed.
Compare 7 with 6. Since 7 is greater, swap them. Array: [1, 7, 10, 6, 14, 9] -> [1, 6, 10, 7, 14, 9]
Compare 10 with 7. Since 10 is greater, no swap needed.
Compare 7 with 14. Since 7 is smaller, no swap needed.
Compare 14 with 9. Since 14 is greater, swap them. Array: [1, 6, 10, 7, 14, 9] -> [1, 6, 10, 7, 9, 14]
After the first round, the largest element (14) is in its correct position at the end of the array.

Round 2:

Compare 1 with 6. Since 1 is smaller, no swap needed.
Compare 6 with 10. Since 6 is smaller, no swap needed.
Compare 10 with 7. Since 10 is greater, swap them. Array: [1, 6, 10, 7, 9, 14] -> [1, 6, 7, 10, 9, 14]
Compare 10 with 9. Since 10 is greater, no swap needed.
Compare 9 with 14. Since 9 is smaller, no swap needed.
After the second round, the second largest element (10) is in its correct position.

Round 3:

Compare 1 with 6. Since 1 is smaller, no swap needed.
Compare 6 with 7. Since 6 is smaller, no swap needed.
Compare 7 with 10. Since 7 is smaller, no swap needed.
Compare 10 with 9. Since 10 is greater, swap them. Array: [1, 6, 7, 10, 9, 14] -> [1, 6, 7, 9, 10, 14]
After the third round, the third largest element (9) is in its correct position.

Round 4:

Compare 1 with 6. Since 1 is smaller, no swap needed.
Compare 6 with 7. Since 6 is smaller, no swap needed.
Compare 7 with 9. Since 7 is smaller, no swap needed.
Compare 9 with 10. Since 9 is smaller, no swap needed.
After the fourth round, the fourth largest element (7) is in its correct position.

Round 5:

Compare 1 with 6. Since 1 is smaller, no swap needed.
Compare 6 with 7..
