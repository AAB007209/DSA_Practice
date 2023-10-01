//- Problem - Check if a number is prime or not
//` Problem Statement: Given a number, check whether it is prime or not. A prime number is a natural number that is only divisible by 1 and by itself.

//! Bruteforce Solution- O(N)

//! Optimal Solution - O(sqrt(N))
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int N)
{
    for (int i = 2; i < sqrt(N); i++)
    {
        if (N % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{

    int n;
    cin >> n;
    bool ans = isPrime(n);
    if (n != 1 && ans == true)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Non Prime Number";
    }
    return 0;
}
