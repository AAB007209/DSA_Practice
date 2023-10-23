//- Printin Pairs - O(N^2), O(1)

#include <bits/stdc++.h>
using namespace std;

void printAllPairs(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int x = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            int y = arr[j];
            cout << "(" << x << ", " << y << ")"
                 << "\n";
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);

    cout << "The Possible Pairs of the array elements are : "
         << "\n";
    printAllPairs(arr, n);

    return 0;
}

//- Output
/*

The Possible Pairs of the array elements are :
(10, 20)
(10, 30)
(10, 40)
(10, 50)
(10, 60)

(20, 30)
(20, 40)
(20, 50)
(20, 60)

(30, 40)
(30, 50)
(30, 60)

(40, 50)
(40, 60)

(50, 60)

*/