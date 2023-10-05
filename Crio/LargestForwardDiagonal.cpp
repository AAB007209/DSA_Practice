// Problem Description
// Given a matrix M, you need to find the forward diagonal having maximum sum. Forward diagonal starts in the left most column or the top most row and ends at the bottom most row or the right most column.

// In the following figure there are 6 forward diagonals and the green diagonal is having the maximum sum.

// image of 3X4 Matrix

// Input Format
// First line contains two space-separated integers n,m - The number of rows & columns in the matrix M

// Each of the next n lines contains m space-separated integers - The matrix M

// Output Format
// Print the sum of elements of the largest forward diagonal.

// Constraints
// 1 <= n,m <= 10^3

// M[i][j] <= 10^6

// Sample Input 1
// 3 4

// 2 9 3 5

// 2 5 4 0

// 5 2 8 5

// Sample Output 1
// 18

// Explanation 1
// The forward diagonal 9, 4, 5 has the maximum sum i.e. 18

#include <bits/stdc++.h>
using namespace std;

int largestForwardDiagonal(const vector<vector<int>> &M)
{
    int maxi = 0;
    int s1 = M.size();
    int s2 = M[0].size();

    if (s1 == s2)
    {
        for (int i = 0; i < s1; i++)
        {
            int r = 0, c = i;
            int sum1 = 0, sum2 = 0;
            while (c < s2 && r < s1)
            {
                sum1 += M[r][c];
                sum2 += M[c][r];
                r++;
                c++;
            }
            maxi = max({sum1, maxi, sum2});
        }
    }
    else
    {
        for (int i = 0; i < s2; i++)
        {
            int r = 0, c = i;
            int sum1 = 0;
            while (r < s1 && c < s2)
            {
                sum1 += M[r][c];
                r++;
                c++;
            }
            maxi = max({sum1, maxi});
        }

        for (int i = 1; i < s1; i++)
        {
            int r = 0, c = i;
            int sum2 = 0;
            while (r < s2 && c < s1)
            {
                sum2 += M[c][r];
                r++;
                c++;
            }
            maxi = max({sum2, maxi});
        }
    }
    return maxi;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> M(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> M[i][j];
        }
    }
    int result = largestForwardDiagonal(M);
    cout << result;
}