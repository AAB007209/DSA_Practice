// Pass by Reference Example

#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n)
{
    cout << "In function " << sizeof(arr) << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);

    printArray(arr, n);

    cout << "In Main " << sizeof(arr) << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}

// - Output
/*
In function 4
1
2
3
4
5
6
In Main 24
1
2
3
4
5
6
*/

//, Points to Remember
/*
` 8. Arrays & Functions - Pass by reference
- When we pass arrays into function it is passed as reference not values.
- When a value is changed in the function the original array also changes in the main because refering to same array.
- Size of a pointer - 4 Bytes in 32-bit system and 8 Bytes in 64-bit system.
*/