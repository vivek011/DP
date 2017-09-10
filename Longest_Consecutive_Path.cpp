#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char arr[100][100];
int dp[100][100];
int dx[8]={0,1,1,-1,1,0,-1,-1};
int dy[8]={1,0,1,1,-1,-1,0,-1};
bool isvalid(int r,int c,int i,int j)
{
    if(i<0|i>=r||j<0||j>=c) return false;
    else return true;
}
bool isadjacent(char prev,char cur)
{
    return (cur-prev)==1;
}
int find_longest_path(int r,int c,int ind_x,int ind_y)
{
    int cunt=1,flag=0,a=9;
    while(a--)
    {
        if(flag==1) break;
        for(int i=0;i<8;i++)
        {
            int x=dx[i];
            int y=dy[i];
            char curr=arr[x+ind_x][y+ind_y];
            if(isadjacent(arr[ind_x][ind_y],curr)&&isvalid(r,c,x+ind_x,y+ind_y))
            {
                ind_x=ind_x+x;
                ind_y=ind_y+y;
                cunt++;
            }
            //else{flag=1;break;}
        }
    }
    return cunt;
}
int main()
{
    int r,c,ind_x,ind_y;
    cin>>r>>c;
    //char arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    char ch;
    cin>>ch;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(ch==arr[i][j])
            {
                ind_x=i;
                ind_y=j;
                            }
        }
    }
    cout<<ind_x<<" "<<ind_y<<endl;
    cout<<find_longest_path(r,c,ind_x,ind_y)<<endl;
}
