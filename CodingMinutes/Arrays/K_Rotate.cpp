//- Coding Exercise 5 : K-Rotate , TC - O(N)

#include <bits/stdc++.h>
using namespace std;

// The below solution is using O(N) Space
vector<int> kRotate(vector<int> a, int k)
{
    vector<int> v;
    int n = a.size();
    k = k % n;

    for (int i = 0; i < n; i++)
    {
        if (i < k)
        {
            v.push_back(a[n + i - k]);
        }
        else
        {
            v.push_back(a[i - k]);
        }
    }
    return v;
}

// The Below solution will do In-place Rotation
vector<int> kRotateInPlace(vector<int> a, int k)
{
    int n = a.size();
    k = k % n;

    reverse(a.begin(), a.begin() + n - k);
    reverse(a.begin() + n - k, a.end());
    reverse(a.begin(), a.end());

    return a;
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9};
    int x = 2;

    cout << "The array before K rotation : ";
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << "The array after K rotation using O(N) Space Solution : ";
    vector<int> answer = kRotate(arr, x);
    for (auto x : answer)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << "The array after K rotation using In-Place Solution: ";
    vector<int> answer1 = kRotateInPlace(arr, x);
    for (auto x : answer1)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

//- Output
/*

The array before K rotation : 1 3 5 7 9
The array after K rotation using O(N) Space Solution : 7 9 1 3 5
The array after K rotation using In-Place Solution: 7 9 1 3 5

*/