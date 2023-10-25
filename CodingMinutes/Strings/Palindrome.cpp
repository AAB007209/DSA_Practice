//- Checking Palindrome

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(char str[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (str[i++] != str[j--])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char str[1000];
    cout << "\nEnter the string in lowercase or uppercase to be checked : ";
    cin.getline(str, 1000);

    bool result = isPalindrome(str, strlen(str));

    if (result)
    {
        cout << "The entered word is a Palindrome" << endl;
    }
    else
    {
        cout << "The entered word is a not a Palindrome" << endl;
    }

    return 0;
}

//- Output
/*

Input-1
Enter the string to be checked : malayalam
The entered word is a Palindrome

Input-2
Enter the string to be checked : MADAM
The entered word is a Palindrome

Input-3
Enter the string to be checked : bangalore
The entered word is a not a Palindrome

*/