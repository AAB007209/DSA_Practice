// - Printing Subarrays - O(N^3), O(1)

#include <bits/stdc++.h>
using namespace std;

void printAllSubarrays(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "{";
            for (int k = i; k <= j; k++)
            {
                // This if else I used is just to make sure that the comma's are placed well
                if (k != j)
                {
                    cout << arr[k] << ",";
                }
                else
                {
                    cout << arr[k];
                }
            }
            cout << "}";
            cout << endl;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);

    cout << "The Subarrays of the given array are :"
         << "\n";
    printAllSubarrays(arr, n);

    return 0;
}

//- Output
/*

The Subarrays of the given array are :
{1}
{1,2}
{1,2,3}
{1,2,3,4}
{1,2,3,4,5}
{1,2,3,4,5,6}
{2}
{2,3}
{2,3,4}
{2,3,4,5}
{2,3,4,5,6}
{3}
{3,4}
{3,4,5}
{3,4,5,6}
{4}
{4,5}
{4,5,6}
{5}
{5,6}
{6}

*/

//, Points to Remember
/*
- Subarray is a continous sub part of an array
- Time Complexity - O(N^3), Space Complexity - O(1)
*/