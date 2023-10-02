//- Problem : (Leetcode and Crio) 11. Container With Most Water (Medium on LC)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0, right = height.size() - 1, maxi = INT_MIN, area = 0, b, l;
        while (left < right)
        {
            b = right - left;
            l = min(height[left], height[right]);
            area = l * b;

            maxi = max(maxi, area);
            (height[left] < height[right]) ? left++ : right--;
        }
        return maxi;
    }
};