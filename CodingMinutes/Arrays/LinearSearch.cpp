// - Linear Search - O(N), O(1)

#include <bits/stdc++.h>
using namespace std;

// Linear Search function
int linear_search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        // Check if current element matches with the key
        if (arr[i] == key)
        {
            // return the index of the matched element in the array
            return i;
        }
    }
    // If the element was not found then return -1 as default value.
    return -1;
}

int main()
{
    int arr[] = {10, 15, 12, 9, 6, 4, 3, 10, 8};
    int n = sizeof(arr) / sizeof(int);

    int key;
    cout << "Enter the key : ";
    cin >> key;

    int index = linear_search(arr, n, key);
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
Enter the key : 4
4 is present at index 5

Input 2
Enter the key : 12
12 is present at index 2

Input 3
Enter the key : 16
16 is not present in the Array

*/

//, Points to remember
/*
` 10 - Linear Search
- Linear Search is used when:
* When you are searching a small list of items.
* When you are searching a list of items that are not sorted.
* When you need to find the first occurrence of an item in a list.
* When you are searching a list of items that are not evenly spaced.
- Time Complexity - O(N), Space Complexity - O(1)
- Traverses the whole array one by one until element is found else if not found we return -1 as default value.
*/