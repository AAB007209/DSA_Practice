//- Coding Exercise 4 : Sorted Pair Sum - Sorted array - Binary Search - O(N), O(1)

#include <bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x)
{
    int n = arr.size();
    int l = 0, r = n - 1, diff = INT_MAX, res_l, res_r;

    while (r > l)
    {
        // To check the difference between the sum of left and right elements minus the given number
        if (abs(arr[l] + arr[r] - x) < diff)
        {
            res_l = l;
            res_r = r;
            diff = abs(arr[l] + arr[r] - x);
        }

        if (arr[l] + arr[r] > x)
            r--;

        else
            l++;
    }
    return {arr[res_l], arr[res_r]};
}

int main()
{
    // You can change the vector values as well as Val value
    vector<int> arr = {10, 22, 28, 29, 30, 40};
    int Val = 54;

    pair<int, int> answer = closestSum(arr, Val);

    cout << "The pair closest to " << Val << " are : " << answer.first << " and " << answer.second;

    return 0;
}

//- Output
/*

The pair closest to 54 are : 22 and 30

*/
