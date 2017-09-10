#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;
int lcs(string s1,string s2)
{
    int l1=s1.length(),l2=s2.length();
    int mat[l1+1][l2+1];
    memset(mat,0,sizeof(mat));
    for(int i=1;i<=l1;i++)
    {
        for(int j=1;j<=l2;j++)
        {
            if(s1[i-1]==s2[j-1])
                mat[i][j]=mat[i-1][j-1]+1;
            else
                mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
        }
    }
    for(int i=1;i<=l1;i++)
    {
        for(int j=1;j<=l2;j++)
        {

          cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return mat[l1][l2];
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<lcs(s1,s2)<<endl;
    return 0;
}
