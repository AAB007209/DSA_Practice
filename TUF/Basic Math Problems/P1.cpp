//- Problem : Count digits in a number
//` Problem Statement: Given an integer N, write a program to count the number of digits in N.

#include <bits/stdc++.h>
using namespace std;

int count_digits(int n)
{
    int x = n;
    int count = 0;
    while (x != 0)
    {
        x = x / 10;
        count++;
    }
    return count;
}

int main()
{
    int n = 12345;
    cout << "Number of digits in " << n << " is " << count_digits(n);
    return 0;
}

//- Solution 2 - O(1) and O(1)

// #include<bits/stdc++.h>

// using namespace std;

// int count_digits( int n )
// {
//   string x = to_string(n);
//   return x.length();
// }

// int main()
// {
//    int n = 12345;
//    cout<< "Number of digits in "<<n<<" is "<<count_digits(n);
//    return 0;
// }

//- Solution 3 - O(1) and O(1)

// #include<bits/stdc++.h>

// using namespace std;

// int count_digits( int n )
// {
//   int digits = floor(log10(n) + 1);
//   return digits;
// }

// int main()
// {
//    int n = 12345;
//    cout<< "Number of digits in "<<n<<" is "<<count_digits(n);
//    return 0;
// }