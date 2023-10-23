//- Subarray Sum - Brute Force Approach- O(N^3), O(1)

#include <bits/stdc++.h>
using namespace std;

// - Brute Force Approach
int largestSubarraySum(int arr[], int n)
{
    int largestSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // Subarray sum from i to j using k loop
            int subArraySum = 0;
            for (int k = i; k <= j; k++)
            {
                subArraySum += arr[k];
            }
            // Checking the maximum sum of the subarrays and storing in largestSum
            largestSum = max(largestSum, subArraySum);
        }
    }
    return largestSum;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    cout << "The Largest Subarray sum is : ";
    cout << largestSubarraySum(arr, n) << endl;

    return 0;
}

//- Output
/*

The Largest Subarray sum is : 11

*/