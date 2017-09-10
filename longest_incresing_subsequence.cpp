#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int lis(int arr[],int n)
{
    int lst[n];
    int mx=0;
   // memset(lst,1,sizeof(lst));
    for(int i=0;i<n;i++)
        lst[i]=1;
    for(int i=0;i<n;i++)
    {
        mx=0;
        for(int j=0;j<i;j++)
        {
            if(arr[i]>arr[j]&&lst[j]>mx)
                mx=lst[j];
        }
        lst[i]+=mx;
        //cout<<lst[i]<<" ";
    }
    mx=0;
    for(int i=0;i<n;i++)
    {
       // cout<<lst[i]<<" ";
        if(lst[i]>mx)
            mx=lst[i];

    }
    return mx;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<lis(arr,n);
    return 0;
}
