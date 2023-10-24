### Coding Minutes - Section 4 : Basic Sorting Algorithms

#### Quiz Questions

1. Choose the proper code for bubble sort
* ```C++
    for(int j=arr.length - 1; j>=0; j--)
    {
        for(int k=0; k<j; k++)
        {
            if(arr[k] > arr[k+1])
            {
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }  
* ```C++
    for(int j=arr.length - 1; j>=0; j--)
    {
        for(int k=0; k<j; k++)
        {
            if(arr[k] < arr[k+1])
            {
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }
* ```C++
    for(int j=arr.length; j>=0; j--)
    {
        for(int k=0; k<j; k++)
        {
            if(arr[k] > arr[k+1])
            {
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }
* ```C++
    for(int j=arr.length; j>=0; j--)
    {
        for(int k=0; k<j; k++)
        {
            if(arr[k] > arr[k+2])
            {
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }
```
```
---
2. Consider an array of elements arr[5]= (31,41,59,26,41,58). Number of iterations required town the elements in the given array by using insertion sort.
   * 3
   * 4
   * 5
   * 6

---
3. The number of swappings needed to sort the numbers: 8, 22, 7, 9, 31, 19, 5, 13 in ascending order using bubble sort is?
   * 11
   * 12
   * 13
   * 14

---
4. How many comparisons are needed to sort an array of length 5 if a straight selection sort is used and an array is already in the opposite order?
    * 1
    * 10
    * 15
    * 20
  
---
5. Which of the following is true for Counting Sort Algorithm
   * It is type of non-comparison sort algorithm
   * It works for negative numbers as well
   * It is a stable sort algorithm (Stable sort: the elements with identical values appear in the same order in the output array as they were in the input array)
   * All of the above

---
### Time and Space Complexities of Algorithms

----------------------------------------------
| Algorithms | Time Complexity | Space Complexity  |
|:--------:|:--------:|:--------:|
| Bubble Sort    | O(N²)   | O(1)    |
| Insertion Sort    | O(N²)   | O(1)  |
| Selection Sort    | O(N²)   | O(1) |
| Counting Sort    | O(N+K)   | O(K) |
| Merge Sort    | O(N LogN)   | O(N) |
| Quick Sort    | O(N²)   | O(N) |