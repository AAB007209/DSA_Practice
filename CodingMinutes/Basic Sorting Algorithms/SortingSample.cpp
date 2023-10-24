//- Sorting with Comparator example

/*
Question - Given an integer vector and a bool variable flag, your task is to sort the vector in accordance to the boolean value. If the bool value passed is true then sort it in non-decreasing order or vice versa. You can use any sorting technique of your choice
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> sortingWithComparator(vector<int> &a, bool flag)
{
    if (flag == 0)
    {
        sort(a.begin(), a.end());
        return a;
    }
    else
    {
        sort(a.begin(), a.end(), greater<int>());
        return a;
    }
}

int main()
{
    vector<int> arr = {3, 10, 1, 45, 32, 67, 34, 19, 7, 33};
    bool flag;
    cout << "\nEnter the flag value (Enter 0 for Ascending order and 1 for descending order): ";
    cin >> flag;

    cout << "\nArray before Sorting : ";
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    sortingWithComparator(arr, flag);

    cout << "\nArray After Sorting : ";
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

//- Output
/*

Input 1 - Flag = 0
Enter the flag value (Enter 0 for Ascending order and 1 for descending order): 0

Array before Sorting : 3 10 1 45 32 67 34 19 7 33

Array After Sorting : 1 3 7 10 19 32 33 34 45 67

-----------------------------------------------------------------

Input 2 - Flag = 1
Enter the flag value (Enter 0 for Ascending order and 1 for descending order): 1

Array before Sorting : 3 10 1 45 32 67 34 19 7 33

Array After Sorting : 67 45 34 33 32 19 10 7 3 1

*/