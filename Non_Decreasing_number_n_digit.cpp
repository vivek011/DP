#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Calculate_Non_Dec(int n)
{

    int dp[10][n+1];
    memset(dp,0,sizeof(dp));
    for(int digit=0;digit<=9;digit++)
        dp[digit][1]=1;
    for(int i=0;i<=9;i++)
    {

        for(int j=2;j<=n;j++)
        {
            for(int k=0;k<=i;k++)
            {
                dp[i][j]+=dp[k][j-1];
            }
        }
    }
    int sum=0;
    for(int i=0;i<=9;i++)
        sum+=dp[i][n];
    return sum;

}
int main()
{
    int n;
    cin>>n;
    cout<<Calculate_Non_Dec(n)<<endl;
    return 0;
}
