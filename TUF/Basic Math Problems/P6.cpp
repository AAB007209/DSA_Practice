//- Problem : Print all Divisors of a given Number
//` Problem Statement: Given a number, print all the divisors of the number. A divisor is a number that gives the remainder as zero when divided.

//! First approach will be brute force traversing from 1 to N and priting O(N)

#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

void printDivisorsOptimal(int n)
{
    cout << "The Divisors of " << n << " are:" << endl;
    for (int i = 1; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            cout << i << " ";
            if (i != n / i)
                cout << n / i << " ";
        }
    cout << "\n";
}

int main()
{
    int num;
    cin >> num;
    printDivisorsOptimal(num);
    return 0;
}
