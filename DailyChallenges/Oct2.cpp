//- GFG Oct 2 - Number of distinct subsequences (HARD) --- Couldn't solve
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int distinctSubsequences(string s)
    {
        int mod = 1e9 + 7;
        int ans = 1;
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            if (mp.find(s[i]) != mp.end())
            {
                int temp = ans;
                ans = ((ans * 2) % mod - mp[s[i]] + mod) % mod;
                mp[s[i]] = temp;
            }
            else
            {
                mp[s[i]] = ans;
                ans = (ans * 2) % mod;
            }
        }
        return ans;
    }
};

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.distinctSubsequences(s) << "\n";
    }

    return 0;
}

/*
Here's a step-by-step explanation of what the code is doing:

1.Initialize ans to 1. This is the initial count of distinct subsequences, which starts at 1 because an empty subsequence is always present.

2.Create an empty map mp where characters encountered in the string will be stored as keys, and their corresponding values will represent the number of distinct subsequences that end with that character.

3.Iterate through the characters of the string s using a for loop.

4.For each character s[i], check if it already exists in the mp map using mp.find(s[i]). If it exists, enter the if block.

5.Inside the if block:
* Create a temporary variable temp and assign the current value of ans to it. This is done to preserve the previous value of ans.
* Update ans as follows:
` Multiply the current value of ans by 2 and take the result modulo mod.
` Subtract mp[s[i]] from the result and take the result modulo mod.
* Update the value of mp[s[i]] to the previous value of ans.

6.If the character s[i] is not found in the mp map (i.e., it's a new character), enter the else block:

* Add the character s[i] to the mp map with a value of ans, indicating that the number of distinct subsequences ending with this character is currently ans.
* Update the value of ans by multiplying it by 2 and taking the result modulo mod. This accounts for the new character.

7.Continue the loop until all characters in the string have been processed.

8.Finally, return the value of ans, which represents the total number of distinct subsequences of the input string modulo mod.

The code effectively calculates the number of distinct subsequences of the input string by maintaining a map of characters and their respective counts. The use of modular arithmetic ensures that the result remains within the bounds specified by mod.
*/