#include<iostream>
using namespace std;
int coin(int arr[],int n,int c)
{
    int mat[n+1][c];
    for(int i=0;i<c;i++)
        mat[0][i]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<c;j++)
        {
            int x=(i-arr[j]>=0)?mat[i-arr[j]][j]:0;
            int y=(j>=1)?mat[i][j-1]:0;
            mat[i][j]=x+y;
        }
    }
    return mat[n][c-1];
}
int main()
{
    int c,n;
    cin>>c>>n;
    int arr[c];
    for(inti=0;i<c;i++)
        cin>>arr[i];
    cout<<coin(arr,n,c);
    return 0;
}
