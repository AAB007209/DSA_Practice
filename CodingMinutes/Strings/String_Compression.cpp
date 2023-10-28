//- String Compression Exercise Problem

#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars)
{
    int count = 1;
    string ans;

    for (int i = 0; i < chars.size(); i++)
    {
        while (i < chars.size() and chars[i + 1] == chars[i])
        {
            count++;
            i++;
        }

        ans += chars[i];
        if (count == 1)
        {
            continue;
        }
        ans += to_string(count);
        count = 1;
    }

    chars.clear();

    for (int j = 0; j < ans.size(); j++)
    {
        chars.push_back(ans[j]);
    }

    // returns the final string after compression
    return chars.size();
}

int main()
{

    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    cout << "\nThe Output is : " << compress(chars) << endl;

    return 0;
}

//- Explanation
/*

Input: chars = ["a","a","b","b","c","c","c"]
Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".

*/