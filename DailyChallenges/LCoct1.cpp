//- Problem : 557. Reverse Words in a String III (Leetcode October Challenge 2023)

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reverseWords(string s)
    {
        // string answer = "";
        // int start = 0;
        // int end = 0;
        // int n = s.length();

        // while(end < n){
        //     if(s[end] != ' '){
        //         end++;
        //     }else{
        //         string temp = s.substr(start, end - start);
        //         reverse(temp.begin(),temp.end());

        //         answer += temp;

        //         end++;
        //         start = end;
        //         answer += " ";
        //     }
        // }
        // string temp = s.substr(start, end - start);
        // reverse(temp.begin(),temp.end());

        // answer += temp;
        // return answer;

        int n = s.length(), i = 0, j = 0, k;
        while (j < n)
        {
            while (j < n && s[j] != ' ')
                j++;
            k = j - 1;
            while (i < k)
                swap(s[i++], s[k--]);
            i = j + 1;
            j++;
        }
        return s;
    }
};

int main()
{
    string s;
    getline(cin, s);
    Solution obj;
    cout << obj.reverseWords(s) << "\n";
}