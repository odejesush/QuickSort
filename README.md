# QuickSort
This repository will contain my implementation of the quick sort algorithm in C++ to use for future projects if needed.

# Compilation Instructions
To compile the test program, simply run execute the following command:
```
make
```

# Execution Instructions
To execute the test program, executed the following command:
```
./test.bin
```

# Algorithm Description
This algorithm works recursively to divide and conquer the problem of sorting elements in an array.
The algorithm selects an element that will become the pivot point and creates three arrays such that
one array will contain all elements less than the pivot, one will contain all elements equal to the 
pivot, and the last array will contain all elements greater than the pivot. The less than and greater
than arrays will be sorted in the same manner. When the arrays become equal to 1 element or less, the
given array is just returned. After sorting the two arrays, the sorted less than and greater than arrays
are combined into a final sorted array with the less than array being inserted first, then the equal
array, and lastly the greater than array.