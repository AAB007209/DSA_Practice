// Problem Description
// Given a number N, you have to find the largest Fibonacci number which is less than N.

// Input Format
// First line contains an integer T - Number of test cases.

// Next T lines each have a given number N

// Output Format
// Print the answer for each test case in a separate line.

// Constraints
// T <= 10^4

// 0 < N <= 10^9

// Sample Input 1
// 2
// 6
// 13

// Sample Output 1
// 5
// 8

// Explanation 1
// In the first test case the largest Fibonacci number less than 6 is 5.

// In the second test case the largest Fibonacci number less than 13 is 8 (the next Fibonacci number after 8 is 13 which is equal to the number N i.e. 13)

#include <bits/stdc++.h>
using namespace std;

int largestFibonacciNumber(int n)
{
    int res = 0, i = 2;
    int a = 0, b = 1;

    if (n == 0 || n == 1)
        return 0;

    while (res < n)
    {
        if (b >= n)
        {
            break;
        }
        else if (res < n)
        {
            res = a + b;
            a = b;
            b = res;
        }
        i++;
    }
    return a;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int result = largestFibonacciNumber(n);
        cout << result << "\n";
    }
}