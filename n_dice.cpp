
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void calculate(int n,int m,int x)
{
    int dp[n+1][x+1];
     memset(dp,0,sizeof(dp));
    for(int i=0;i<=m;i++)
        dp[1][i]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=x;j++)
        {
            for(int k=1;k<=m&&k<j;k++)
            {
                dp[i][j]+=dp[i-1][j-k];
            }
        }
    }
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=x;j++)
        {
           cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n,m,x;
    cin>>n>>m>>x;
    //memset(dp,0,sizeof(dp));
    calculate(n,m,x);
    return 0;
}
