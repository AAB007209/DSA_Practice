// - Selection Sort - O(N^2), O(1)

#include <bits/stdc++.h>
using namespace std;

// Sorting the elements in increasing order here
void selection_sort(int a[], int n)
{
    for (int pos = 0; pos <= n - 2; pos++)
    {
        int current = a[pos];   // Holding the current position element
        int min_position = pos; // Holding min position of the element from the unsorted array

        // finding the min element from the unsorted array
        for (int j = pos; j < n; j++)
        {
            // Checking for the min element and updating the min_position
            if (a[j] < a[min_position])
            {
                min_position = j;
            }
        }
        // Swap the pos with the min element if found or else keep the same and move forward

        swap(a[min_position], a[pos]);
    }
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    cout << "\nSelection Sort Algorithm";
    cout << endl;
    cout << "The Array Before Sorting : ";
    for (auto x : arr)
    {
        cout << x << " ";
    }

    selection_sort(arr, n);

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

Selection Sort Algorithm
The Array Before Sorting : -2 3 4 -1 5 -12 6 1 3
The Array After Sorting : -12 -2 -1 1 3 3 4 5 6

*/

//, Points to Remember - Playing Cards Example
/*
- Repeatedly find the minimum element from unsorted part and putting it at the beginning

- When to use Selection Sort:
* When the array is not partially sorted
* When there are memory usage constraints
* When the array to be sorted is relatively small
* When checking if everything is already sorted
* On list structures that make add and remove efficient, such as a linked list

*/