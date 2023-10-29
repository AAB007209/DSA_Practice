//- Exercise 14 : Remove Duplicates

#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s)
{
    set<char> ss(s.begin(), s.end());
    // unordered_set<char> ss(s.begin(), s.end()); //- Can also be used if sorting is not required
    string str;

    for (auto x : ss)
    {
        str.push_back(x);
    }
    return str;
}

int main()
{

    string str = "getting_better_at_coding";

    cout << "\nThe String before removing duplicates : " << str << "\n";

    cout << "\nThe String after removing duplicates : " << removeDuplicate(str) << "\n";

    return 0;
}

//- Output
/*

The String before removing duplicates : getting_better_at_coding

The String after removing duplicates : _abcdeginort

*/

//, Points to Remember
/*
- set is used because we only want a data structure to hold unique characters from the string and avoid duplication
- we can also use unordered_set if sorting is not required.
- Time Complexity of set is O(logN) for insertion and deletion of elements and Space complexity of O(N) where N being the No.of Elements stored.
*/