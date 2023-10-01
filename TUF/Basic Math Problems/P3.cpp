//- Problem: Check if a number is Palindrome or Not
//` Problem Statement:  Given a number check if it is a palindrome.

#include <bits/stdc++.h>
using namespace std;
int reverse(int X)
{
    int Y = 0;
    while (X > 0)
    {
        // Extract the last digit
        int digit = X % 10;
        // Appending last digit
        Y = Y * 10 + digit;
        // Shrinking X by discarding the last digit
        X = X / 10;
    }
    return Y;
}
int main()
{
    int X;
    cin >> X;
    int num = X;
    int Y = reverse(X);
    if (num == Y)
    {
        cout << "Palindrome Number" << endl;
    }
    else
    {
        cout << "Not Palindrome Number" << endl;
    }
    return 0;
}