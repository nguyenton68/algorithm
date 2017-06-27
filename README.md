# algorithm
This folder is for algorithm learning

1. quick_sort_test.cpp: sorting an array in increase order using quick sort algorithm.
The key is divide the array into left and right array, and find the right position of the first element in the original array.

2. merge_sort.cpp: sorting an array in ascending order using merge sort algorithm
They key is divide the array evenly into 2. Then keep dividing until there is 1 element left.
Then the merge will merge 2 arrays into big array by comparing each element in two subarray.
Then put the smallest one into main array.

3. heap_sort.cpp: sorting an array
Sorting using tree. Node i with left and right child.
Only need to loop n/2. Because there are at least n/2 node.
max_heap compare the node with its childs. Then swap. Recursively call max_heap for the largest index.

4. quick_sort_new.cpp: quick sort with shorter version
This code choose the last element to be pivot.
Use 2 indices stand for smaller and larger subarray.

5. quick_sort_string.cpp:
This code is used to check whether 1 string is a permutation of other string.
Algorithm:
- Sorted each string. This sort is the same as an int array. Need to change int a[DIM] -> char a[]. And all argument int* -> char *
- Compare each element in two strings.
