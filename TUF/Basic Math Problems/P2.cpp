//- Problem : Reverse a Number
//` Problem Statement: Given a number N reverse the number and print it.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N = 12345677;
    int num = N;
    int reverse = 0;
    while (N != 0)
    {
        int digit = N % 10;
        reverse = reverse * 10 + digit;
        N = N / 10;
    }
    cout << "The Number " << num << " reverse is " << reverse;
    return 0;
}