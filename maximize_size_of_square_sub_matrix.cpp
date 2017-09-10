#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define r 1000
#define c 1000
int arr[r][c];
int max_sq(int arr[r][c],int n,int m)
{
    int aux[n+1][m+1];
    int mx=0;
    memset(aux,0,sizeof(aux));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(arr[i-1][j-1]==1)
                {
                    aux[i][j]=min(aux[i-1][j],min(aux[i][j-1],aux[i-1][j-1]))+1;
                    if(mx<aux[i][j]) mx=aux[i][j];
                }
            else
                aux[i][j]=0;
        }
    }
    return mx;
}
int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<max_sq(arr,n,m);
    return 0;
}
