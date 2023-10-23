### Coding Minutes - Section 3 : Arrays

#### Quiz Questions

1. What will happen when the following program is compiled and run ?

   * The program will encounter a complilation error.
   * No
   * Yes
``` C++
    int main() {
 
    int a[]={1,2,3,4,5};
    int b[]={1,2,3,4,5};
    
    if(a==b) {
        printf("yes");
    else {
        printf("No");
    }
    return 0;
```

2. The number of key comparisons for ``linear search`` in an array in the worst case of an array of 100 elements
   * 99
   * 100
   * 101
   * 102

3. The number of key comparisons in the ``binary search`` for key=25 in the below sorted array is ``21, 26, 32, 34, 40, 45, 47, 50, 52, 55``
   * 2
   * 3
   * 4
   * 5

4. Kadane’s algorithm uses which of the following techniques ?
    * Divide and Conquer
    * Dynamic Programming
    * Recursion
    * All of the mentioned

5. Kadane's method would return a WRONG output/error for which of the following inputs?
   * {1, 0, -1}
   * {-1, -2, -3}
   * {1, 2, 3}
   * {0, 0, 0}