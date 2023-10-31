//- Binary String to Number

#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(string s)
{
    string num = s;
    int dec_value = 0;
    int base = 1;

    // Traversing the string
    for (int i = num.length() - 1; i >= 0; i--)
    {
        // if we encounter 1 then we need to add that base to dec-value
        if (num[i] == '1')
        {
            dec_value += base;
        }
        base *= 2; // Increasing the base to the power of 2
    }
    return dec_value;
}

int main()
{
    string str;
    cout << "\nEnter the Binary String: ";
    cin >> str;

    cout << "\nThe Integer value of the Binary String is : " << binaryToDecimal(str) << endl;

    return 0;
}

//- Output
/*

Input-1:

Enter the Binary String: 111

The Integer value of the Binary String is : 7

Input-2:

Enter the Binary String: 1011

The Integer value of the Binary String is : 11

*/