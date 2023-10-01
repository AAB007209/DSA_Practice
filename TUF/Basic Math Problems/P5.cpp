//- Problem : Check if a number is Armstrong Number or not
//` Problem Statement: Given a number, check if it is Armstrong Number or Not.

#include <bits/stdc++.h>
using namespace std;
bool ArmstrongNumber(int n)
{
    int originalno = n;
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    int sumofpower = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sumofpower += pow(digit, count);
        n /= 10;
    }
    return (sumofpower == originalno);
}
int main()
{
    int num;
    cin >> num;
    if (ArmstrongNumber(num))
    {
        cout << "Yes, it is an Armstrong Number\n";
    }
    else
    {
        cout << "No, it is not an Armstrong Number\n";
    }
    return 0;
}