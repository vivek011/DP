#include<iostream>
using namespace std;
//int global_sum=0;
int sum_n_digit_number(int digit,int sum)
{
    if(digit==1) return 1;
    int global_sum=0;
    for(int i=0;i<=9;i++)
        if(sum-i>=0)
    global_sum+=sum_n_digit_number(digit-1,sum-i);
    return global_sum;
}
int main()
{
    int digit,sum,ans=0;
    cin>>digit>>sum;
    for(int i=1;i<=9;i++)
        if(sum-i>=0)
        ans+=sum_n_digit_number(digit-1,sum-i);
    cout<<ans<<endl;
    return 0;
}
