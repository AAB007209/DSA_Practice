//- Coding Exercise 3 : Lower Bound - O(log N), O(1)

#include <bits/stdc++.h>
using namespace std;

//, Binary Search
int lowerBound(vector<int> A, int Val)
{
    int n = A.size();
    int l = 0, r = n - 1;
    int answer = -1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (A[mid] > Val)
        {
            r = mid - 1;
        }
        else
        {
            // whenever the mid is less than Val it is the lower bound for now to the given Val.
            answer = A[mid];
            l = mid + 1;
        }
    }
    return answer;
}

int main()
{
    // You can try for different array's and values
    vector<int> A = {-1, -1, 2, 3, 5};
    int Val = 10;

    cout << "The Lower Bound of " << Val << " is " << lowerBound(A, Val) << endl;

    return 0;
}

//- Output
/*

Input 1, Val=4:
The Lower Bound of 4 is 3

Input 2, Val=10;
The Lower Bound of 10 is 5

*/

//, Points to Remember for this Problem
/*
- We show use Binary Search as it is sorted array.
- Lower bound is the number just smaller than given Value or the value itself.
- If the value given is smaller than the first element of the array then we return -1 as answer.
*/