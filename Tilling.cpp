#include<iostream>
using namespace std;
int main()
{
    int n,c;
    cin>>n;
    int a=1;
    int b=2;
    if(n==1) return 1;
    if(n==2) return 2;
    for(int i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    cout<<c<<" ";
    return 0;
}
