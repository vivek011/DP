#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int dp[10000][10000];
int max_subsequence(string str1,string str2,int n,int m)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(str1[i-1]==str2[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else
                {

                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);

                }
        }
    }
    return dp[n][m];
}
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    memset(dp,0,sizeof(dp));
    int n=str1.length(),m=str2.length();
    cout<<n+m-max_subsequence(str1,str2,n,m)<<endl;
    return 0;


}
