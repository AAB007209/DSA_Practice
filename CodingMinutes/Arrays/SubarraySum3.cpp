//- Subarray Sum 3: Kadane's Algorithm - O(N), O(1)

#include <bits/stdc++.h>
using namespace std;

//- Kadane's Algorithm (Optimal Solution)
int largestSubarraySum3(int arr[], int n)
{
    int currentSum = 0, largest = 0;

    for (int i = 0; i < n; i++)
    {
        // Updating currentSum by linearly traversing the array
        currentSum = currentSum + arr[i];
        // if currentSum becomes less than 0 then we make it 0 because it won't help us to achieve greater sum anyhow
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        // Updating the largest sum into largest
        largest = max(largest, currentSum);
    }

    return largest;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    cout << "The Largest Subarray sum is : ";
    cout << largestSubarraySum3(arr, n) << endl;

    return 0;
}

//- Output
/*

The Largest Subarray sum is : 11

*/

//, Points to Remember
/*
- Kadane's Algorithm is an iterative dynamic programming algorithm.
- Kadane’s algorithm requires atleast one positive integer to produce the right input
- Kadane's Algorithm is used to find the subarray sum in optimal way
- Time Complexity - O(N), Space Complexity - O(1)
*/