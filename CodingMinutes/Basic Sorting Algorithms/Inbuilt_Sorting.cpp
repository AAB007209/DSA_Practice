//- Sorting using sort() Inbuilt function
//, It is defined in #include <algorithm> header

#include <bits/stdc++.h>
using namespace std;

bool comparator(int a, int b)
{
    return a < b;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    cout << "\nArray before sorting : ";
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    // sort(arr, arr + n);

    // The below sort is sorting in descending order because of comparator function being passed as a parameter.
    sort(arr, arr + n, comparator); // we can also pass comparator function as a paramter to sort according to our needs.

    cout << "\nArray After sorting (ascending order by default): ";
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

//- Output
/*

Array before sorting : -2 3 4 -1 5 -12 6 1 3

Array After sorting (ascending order by default): -12 -2 -1 1 3 3 4 5 6

*/

//, Points to Remember
/*
- Time complexity is O(N x logN) which is better than bubble, insertion or selection sorting.

- sort() takes a third parameter (function parameter) that is used to specify the order in which elements are to be sorted

- we can also do sort(arr, arr+n, [](const int& a, const int& b) { return a > b; }) -> This is Sorting using Lambda Expression

- sort(arr, arr + n, greater<int>()); -> Explicit mentioning to sort in descending order using function parameter greater<int>()

*/