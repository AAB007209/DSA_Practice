// - Insertion Sort - O(N^2), O(1)

#include <bits/stdc++.h>
using namespace std;

// Sorting the elements in increasing order here
void insertion_sort(int a[], int n)
{
    // Traversing from 1 to n-1 indexes
    for (int i = 1; i < n; i++)
    {
        // current holding the current element and prev holding the previous element being compared with.
        int current = a[i], prev = i - 1;

        // This loop is finding the right index for the current element in the array
        while (prev >= 0 && a[prev] > current)
        {
            a[prev + 1] = a[prev];
            prev = prev - 1;
        }
        // After the index is found or current is > than previous then we insert it into this correct position
        a[prev + 1] = current;
    }
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    cout << "\nInsertion Sort Algorithm";
    cout << endl;
    cout << "The Array Before Sorting : ";
    for (auto x : arr)
    {
        cout << x << " ";
    }

    insertion_sort(arr, n);

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

Insertion Sort Algorithm
The Array Before Sorting : -2 3 4 -1 5 -12 6 1 3
The Array After Sorting : -12 -2 -1 1 3 3 4 5 6

*/

//, Points to Remember - Playing Cards Example
/*

- Insertion sort compares each element in the list to its preceding elements and swaps them if it finds that it is out of order.

- Insertion sort is best used when the data set is small, such as when sorting a few hundred elements or less. Also when data is nearly sorted

- When we have memory usage constraints we can use Insertion Sort.

*/