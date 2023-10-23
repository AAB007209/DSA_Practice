//- Subarray Sum 2 - Prefix Sum Approach- O(N^2), O(N)

#include <bits/stdc++.h>
using namespace std;

// - Prefix Sum Approach
int largestSubarraySum2(int arr[], int n)
{
    // Computing Prefix sum array beforehand
    int prefix[n] = {0};
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int largestSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // Calculating subArraysum using prefix array
            int subArraysum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];

            // Checking the maximum sum of the subarrays and storing in largestSum
            largestSum = max(largestSum, subArraysum);
        }
    }
    return largestSum;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    cout << "The Largest Subarray sum is : ";
    cout << largestSubarraySum2(arr, n) << endl;

    return 0;
}

//- Output
/*

The Largest Subarray sum is : 11

*/