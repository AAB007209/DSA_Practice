#include <bits/stdc++.h>
using namespace std;

int largestForwardDiagonal(const vector<vector<int>> &M){
    int maxi = 0;
    int s1 = M.size();
    int s2 = M[0].size();

    if(s1 == s2)
    {
        for(int i=0; i<s1; i++)
        {
            int r=0, c=i;
            int sum1=0, sum2=0;
            while(c < s2 && r < s1){
                sum1 += M[r][c];
                sum2 += M[c][r];
                r++;
                c++;
            }
            maxi = max({sum1, maxi, sum2});
        }
    }else{
        for(int i=0; i<s2; i++)
        {
            int r=0, c=i;
            int sum1=0;
            while(r < s1 && c < s2){
                sum1 += M[r][c];
                r++;
                c++;
            }
            maxi = max({sum1, maxi});
        }

        for(int i=1; i<s1; i++)
        {
            int r=0, c=i;
            int sum2=0;
            while(r < s2 && c < s1){
                sum2 += M[c][r];
                r++;
                c++;
            }
            maxi = max({sum2, maxi});
        }
    }
    return maxi;
}

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>>M(n,vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>M[i][j];
        }
    }
    int result = largestForwardDiagonal(M);
    cout<<result;
}