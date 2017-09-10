#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[1000][1000];
int calculate(int arr[][1000],int n,int m)
{
    int aux[n][m];
    memset(aux,0,sizeof(aux));
    aux[0][0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            //if(j==0) {aux[i][0]=1;continue;}
            if(i==0)
            {
                if(arr[i][j-1]==arr[i][j]+1||arr[i][j-1]==arr[i][j]-1) aux[i][j]=aux[i][j-1]+1;continue;
            }
            if(arr[i][j-1]==arr[i][j]+1||arr[i][j]==arr[i][j-1]-1) aux[i][j]=max(aux[i][j],aux[i][j-1]+1);
            if(arr[i-1][j]==arr[i][j]+1||arr[i-1][j]==arr[i][j]-1) aux[i][j]=max(aux[i][j],aux[i-1][j]+1);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<aux[i][j]<<" ";
        }
        cout<<endl;
    }
    return aux[n-1][m-1];
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
    cout<<calculate(arr,n,m);
    return 0;
}
