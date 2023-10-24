// - Counting Sort - O(Range + N), O(Range)

#include <bits/stdc++.h>
using namespace std;

void counting_sort(int a[], int n)
{
    // Assuming the array is non-negative
    int largest = -1;

    // Iterating through the array to find the largest in the array
    for (int i = 0; i < n; i++)
    {
        largest = max(largest, a[i]);
    }

    // Create a count array/vector
    vector<int> freq(largest + 1, 0);

    // Update the freq array
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }

    // Put back the elements from freq into original array.
    int j = 0;
    for (int i = 0; i <= largest; i++)
    {
        while (freq[i] > 0)
        {
            a[j] = i;
            freq[i]--;
            j++;
        }
    }
    return;
}

int main()
{
    int arr[] = {88, 97, 10, 12, 15, 1, 5, 6, 12, 5, 8};
    int n = sizeof(arr) / sizeof(int);

    cout << "\nCounting Sort Algorithm";
    cout << endl;
    cout << "The Array Before Sorting : ";
    for (auto x : arr)
    {
        cout << x << " ";
    }

    counting_sort(arr, n);

    cout << "\nThe Array After Sorting : ";
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

//- Output
/*

Counting Sort Algorithm
The Array Before Sorting : 88 97 10 12 15 1 5 6 12 5 8
The Array After Sorting : 1 5 5 6 8 10 12 12 15 88 97

*/

//, Points to Remember - Playing Cards Example
/*
- Counting Sort is a non-comparison-based sorting algorithm that works well when there is limited range of input values.

- It is particularly efficient when the range of input values is small compared to the number of elements to be sorted.

- The basic idea behind Counting Sort is to count the frequency of each distinct element in the input array and use that information to place the elements in their correct sorted positions.

- Time Complexity - O(Range + N), Space Complexity - O(Range)
*/