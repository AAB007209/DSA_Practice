//- Binary Search - O(log N), O(1)

#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 15, 18, 20, 23};

    int n = sizeof(arr) / sizeof(int);

    int key;
    cout << "Enter the key : ";
    cin >> key;

    int index = binary_search(arr, n, key);

    if (index != -1)
    {
        cout << key << " is present at index " << index << endl;
    }
    else
    {
        cout << key << " is not present in the Array" << endl;
    }

    return 0;
}

// - Output
/*

Input 1
Enter the key : 15
15 is present at index 5

Input 2
Enter the key : 23
23 is present at index 8

Input 3
Enter the key : 25
25 is not present in the Array

*/

//, Points to remember
/*
` 11, 12 - Binary Search
- Binary Search is only used when we have Sorted array.
- Time Complexity - O(Log N), Space Complexity - O(1)
- Works by dividing the array into half each time until the element is found, if not found we return -1 as default value.
*/