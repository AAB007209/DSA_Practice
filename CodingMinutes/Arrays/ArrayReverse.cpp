//- Array Reverse - O(N/2), O(N)

#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = sizeof(arr) / sizeof(int);

    // Printing the normal array
    cout << "The Array before reversing : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, n);

    cout << "The array after reversing : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

//- Output
/*

The Array before reversing : 10 20 30 40 50 60 70 80 90
The array after reversing : 90 80 70 60 50 40 30 20 10

*/

//, Points to Remember
/*
- Swap is an inbuilt function used here. we can also define our own swap function
- Time Complexity - O(N/2) & Time Complexity - O(N)
*/