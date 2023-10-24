//- (Optimized) Bubble Sort - O(N^2), O(1)

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                flag = true;
            }
        }
        if (!flag)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    cout << "\nBubble Sort Algorithm";
    cout << endl;
    cout << "The Array Before Sorting : ";
    for (auto x : arr)
    {
        cout << x << " ";
    }

    bubble_sort(arr, n);

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

Bubble Sort Algorithm
The Array Before Sorting : -2 3 4 -1 5 -12 6 1 3
The Array After Sorting : -12 -2 -1 1 3 3 4 5 6

*/

//, Points to Remember
/*
- It's effectively used when the array elements are few and the array is nearly sorted.
- Time Complexity - O(N^2) and Space Complexity - O(1)
- I used flag here so as to Optimize the bubble sort
- Optimized Bubble sort checks if the array is already fully sorted using a flag and breaks from further non-required checks.
*/