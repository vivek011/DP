#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int linear_equa(int coff[],int n,int res)
{
    int aux[res+1];

    memset(aux,0,sizeof(aux));
     aux[0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=coff[i];j<=res;j++)
        {

                if(j<=res)
                aux[j]+=aux[j-coff[i]];
                cout<<aux[j]<< " ";
        }
        cout<<endl;
    }
    return aux[res];
}
int main()
{
    int n,res;
    cin>>n>>res;
    int coff[n];
    for(int i=0;i<n;i++)
    {
        cin>>coff[i];
    }
    cout<<linear_equa(coff,n,res);
    return 0;
}
